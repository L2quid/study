import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import 'dart:convert';

class InfContents extends StatefulWidget {
  @override
  _InfContentsState createState() => _InfContentsState();
}

class Picture {
  int id;
  String name;
  int age;

  Picture(this.id, this.name, this.age);

  Picture.formMap(Map<String, dynamic> map)
      : id = map['id'],
        name = map['name'],
        age=map['age'];
}

class _InfContentsState extends State<InfContents> {
  List _data = [];
  int page = 1;
  // ignore: non_constant_identifier_names
  ScrollController _Scroll = ScrollController();

  @override
  void initState() {
    super.initState();
    _fetchData();
    _Scroll.addListener(() {
      if (_Scroll.position.pixels == _Scroll.position.maxScrollExtent) {
        _fetchData();
      }
    });
  }

  void dispose() {
    _Scroll.dispose();
    super.dispose();
  }

  Future _fetchData() async {
    int limit = 10;
    await http
        .get(Uri.parse("http://18.216.47.35:3000/?page=$page&limit=$limit"))
        .then((res) {
      if (res.statusCode == 200) {
        String jsonString = res.body;
        List pic = jsonDecode(jsonString);
        for (int i = 0; i < pic.length; i++) {
          var pics = pic[i];
          Picture pictureToAdd = Picture(pics["id"], pics["name"], pics["age"]);
          setState(() {
            _data.add(pictureToAdd);
          });
        }
        setState(() {
          page++;
        });
      } else {
        print('error');
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('test'),
      ),
      body: ListView.builder(
          controller: _Scroll,
          itemCount: _data.length + 1,
          itemBuilder: (context, index) {
            if (index == _data.length) {
              return Padding(
                padding: const EdgeInsets.all(12.0),
                child: Center(child: CircularProgressIndicator()),
              );
            }
            Picture pic = _data[index];
            return Container(
              child: Column(
                children: [
                  Text("id : "+ pic.id.toString()),
                  Text(pic.name),
                  Text("age : "+pic.age.toString()),
                  Divider(),
                ],
              ),
            );
          }),
    );
  }
}
