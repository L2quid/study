import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:flutter_form_builder/flutter_form_builder.dart';
import 'package:http/http.dart' as http;
import 'package:intl/intl.dart';
import 'package:sample_test/main.dart';

class User {
  int id;
  String name;
  int age;

  User(this.id, this.name, this.age);

  User.formMap(Map<String, dynamic> map)
      : id = map['id'],
        name = map['name'],
        age = map['age'];
}

class SendForm extends StatefulWidget {
  @override
  _State createState() => _State();
}

class _State extends State<SendForm> {
  GlobalKey<FormBuilderState> _fbkey = GlobalKey<FormBuilderState>();
  final DateTime startDate = DateTime.now();
  List _data = [];

  void _submit() {
    if (!_fbkey.currentState.validate()) {
      return;
    }
    _fbkey.currentState.save();
    final inputValues = _fbkey.currentState.value;
    sendData(inputValues);
    Navigator.push(
      context,
      MaterialPageRoute(builder: (context) => MyApp()),
    );
  }

  Future getUsers() async {
    await http
        .get(Uri.parse("http://18.216.47.35:3000/?page=1&limit=5"))
        .then((res) {
      if (res.statusCode == 200) {
        String jsonString = res.body;
        List pic = jsonDecode(jsonString);
        for (int i = 0; i < pic.length; i++) {
          var pics = pic[i];
          User userToAdd = User(pics["id"], pics["name"], pics["age"]);
          setState(() {
            _data.add(userToAdd);
          });
        }
      } else {
        print('error');
      }
    });
  }

  Future sendData(inputValues) {
    var body = json.encode(inputValues);
    print(body);
    return http.post(Uri.parse("https://webhook.site/f31b331d-6f4a-4491-8897-976831f00575"),
        headers: {"Content-Type": "application/json"}, body: body);
  }

  @override
  void initState() {
    super.initState();
    getUsers();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Form Test'),
      ),
      body: SingleChildScrollView(
        child: Column(
          children: [
            Padding(
              padding: const EdgeInsets.all(20.0),
              child: FormBuilder(
                key: _fbkey,
                child: Column(
                  children: [
                    FormBuilderDropdown(
                      name: 'user',
                      hint: Text('선택'),
                      items: _data
                          .map((e) => DropdownMenuItem(
                                value: e.id,
                                child: Text(e.name),
                              ))
                          .toList(),
                      decoration: InputDecoration(
                        filled: true,
                        labelText: '사용자',
                        border: OutlineInputBorder(),
                      ),
                      validator: FormBuilderValidators.required(context,
                          errorText: '필수선택'),
                    ),
                    SizedBox(
                      height: 20,
                    ),
                    FormBuilderTextField(
                        name: 'name',
                        decoration: InputDecoration(
                          hintText: 'name',
                          border: OutlineInputBorder(),
                        ),
                        validator: FormBuilderValidators.required(context,
                            errorText: '필수 입력')),
                    SizedBox(
                      height: 20,
                    ),
                    FormBuilderTextField(
                        name: 'age',
                        decoration: InputDecoration(
                          hintText: 'age',
                          border: OutlineInputBorder(),
                        ),
                        validator: FormBuilderValidators.required(context,
                            errorText: '필수 입력')),
                    SizedBox(
                      height: 20,
                    ),
                    FormBuilderTextField(
                        name: 'id',
                        decoration: InputDecoration(
                          hintText: 'id',
                          border: OutlineInputBorder(),
                        ),
                        validator: FormBuilderValidators.required(context,
                            errorText: '필수 입력')),
                  ],
                ),
              ),
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              children: [
                MaterialButton(
                  child: Text(
                    'SUBMIT',
                    style: TextStyle(fontSize: 18),
                  ),
                  onPressed: _submit,
                  color: Colors.indigo,
                  textColor: Colors.white,
                  minWidth: 120,
                ),
                MaterialButton(
                  child: Text(
                    'RESET',
                    style: TextStyle(fontSize: 18),
                  ),
                  onPressed: () {},
                  color: Colors.red,
                  textColor: Colors.white,
                  minWidth: 120,
                )
              ],
            )
          ],
        ),
      ),
    );
  }
}
