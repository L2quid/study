import 'package:flutter/material.dart';
import 'package:sample_test/widget/RecCard/RecCardContent.dart';
import 'package:sample_test/widget/RecCard/rec_card_footer.dart';
import 'package:sample_test/widget/RecCard/rec_card_header.dart';

class RecommendCard extends StatelessWidget {
  // data.id, data.name, data.age
  final data;
  const RecommendCard({Key key, this.data}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      width: 360,
      height: 294,
      decoration: BoxDecoration(
        color: Color(0xff3d3d3d),
      ),
      // 카드 제작
      child: Column(
        children: [
          RecCardHeader(data: data,),
          RecCardContent(data: data,),
          RecCardFooter(data: data,),
        ],
      ),
    );
  }
}
