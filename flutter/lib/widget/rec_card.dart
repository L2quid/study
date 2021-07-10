import 'package:flutter/material.dart';

class RecommendCard extends StatelessWidget {
  // data.id, data.name, data.age
  final data;
  const RecommendCard({Key key, this.data}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      width: 360,
      height: 300,
      decoration: BoxDecoration(
        color: Color(0xff3d3d3d),
      ),
      // 카드 제작
      child: Text('${data.id}, ${data.name}, ${data.age}'),
    );
  }
}
