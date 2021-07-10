import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:sample_test/widget/infContents.dart';
import 'package:sample_test/widget/main_postDiary.dart';
import 'package:sample_test/widget/tabelCalendar.dart';

class CalendarTest extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return SingleChildScrollView(
        child: Column(
      children: [
        SizedBox(
          height: 30,
        ),
        Padding(
          padding: const EdgeInsets.all(14.0),
          child: CalTest(),
        ),
      ],
    ));
  }
}
