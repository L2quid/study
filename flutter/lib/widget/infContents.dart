import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import 'dart:convert';

class InfContents extends StatefulWidget {
  @override
  _InfContentsState createState() => _InfContentsState();
}

class Picture {
  String id;
  String author;

  Picture(this.id, this.author);

  Picture.formMap(Map<String, dynamic> map)
      : id = map['id'],
        author = map['author'];
}

class _InfContentsState extends State<InfContents> {
  List _data = [];
  int page = 1;
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
    int limit = 20;
    await http
        .get(Uri.parse("https://picsum.photos/v2/list?page=$page&limit=$limit"))
        .then((res) {
      if (res.statusCode == 200) {
        String jsonString = res.body;
        List pic = jsonDecode(jsonString);
        for (int i = 0; i < pic.length; i++) {
          var pics = pic[i];
          Picture PictureToAdd = Picture(pics["id"], pics["author"]);

          setState(() {
            _data.add(PictureToAdd);
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
          itemCount: _data.length+1,
          itemBuilder: (context, index) {
            if (index==_data.length){
              return Padding(
                padding: const EdgeInsets.all(12.0),
                child: Center(child: CircularProgressIndicator()),
              );
            }
            Picture pic = _data[index];
            return Container(
              child: Column(
                children: [
                  Text(pic.id),
                  Text(pic.author),
                  Divider(),
                ],
              ),
            );
          }),
    );
  }
}
