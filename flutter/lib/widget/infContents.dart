import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import 'package:sample_test/widget/RecCard/rec_card.dart';
import 'package:sample_test/widget/recommend_header.dart';
import 'package:sample_test/widget/tabelCalendar.dart';
import 'dart:convert';

import 'main_postDiary.dart';

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
        age = map['age'];
}

class _InfContentsState extends State<InfContents> {
  List _data = [];
  int page = 1;

  // ignore: non_constant_identifier_names
  ScrollController _Scroll = ScrollController();

  @override
  void initState() {
    _fetchData();
    _Scroll.addListener(() {
      if (_Scroll.position.pixels >= _Scroll.position.maxScrollExtent) {
        _fetchData();
      }
    });
    super.initState();
  }

  void dispose() {
    _Scroll.dispose();
    super.dispose();
  }

  Future _fetchData() async {
    int limit = 15;
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

  void deleteId(inputValues) {
    var body = json.encode({"id": inputValues});
    http.post(
        Uri.parse("https://webhook.site/f31b331d-6f4a-4491-8897-976831f00575"),
        headers: {"Content-Type": "application/json"},
        body: body);
  }

  @override
  Widget build(BuildContext context) {
    return ListView.builder(
        controller: _Scroll,
        itemCount: _data.length,
        itemBuilder: (context, index) {
          if (index == 0) {
            return SingleChildScrollView(
                child: Column(
              children: [
                SizedBox(
                  height: 15,
                ),
                Padding(
                  padding: const EdgeInsets.all(14.0),
                  child: CalTest(),
                ),
                postDiary(),
                RecommendHeader(),
              ],
            ));
          }
          /*  로딩 이미지 사용시 itemCount: _data.length+1 로 변경하기
          if (index == _data.length) {
            return Padding(
              padding: const EdgeInsets.all(12.0),
              child: Center(child: CircularProgressIndicator()),
              //로딩 아이콘 의뢰?
            );
          }
          */
          Picture pic = _data[index];
          return Padding(
            padding: const EdgeInsets.only(left: 16.0, right: 16),
            child: Column(
              children: [
                Container(
                  decoration: BoxDecoration(
                    color: Color(0xff3d3d3d),
                  ),
                  child: RecommendCard(data: pic), // 추천 카드
                ),
                Container(
                  height: 15,
                  decoration: BoxDecoration(color: Color(0xff2d2d2d)),
                )
              ],
            ),
          );
        });
  }
}
