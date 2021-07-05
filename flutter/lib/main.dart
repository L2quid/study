import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:sample_test/screen/SendForm.dart';
import 'package:sample_test/screen/calendar.dart';
import 'package:sample_test/screen/home_screen.dart';
import 'package:sample_test/screen/infinity_scroll.dart';
import 'package:sample_test/widget/bottom_bar.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatefulWidget {
  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  TabController controller;
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Netflix',
      theme: ThemeData(
        brightness: Brightness.light,
        primaryColor: Colors.white,
        accentColor: Colors.orangeAccent[100],
      ),
      home: DefaultTabController(
        length: 5,
        child: Scaffold(
          body: TabBarView(
            physics: NeverScrollableScrollPhysics(),
            children: [
              HomeScreen(),
              InfinityScroll(),
              SendForm(),
              CalendarTest(),
              Container(),
            ],
          ),
          bottomNavigationBar: Bottom(),
        ),
      ),
    );
  }
}
