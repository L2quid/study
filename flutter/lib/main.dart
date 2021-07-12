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
  final int initIndex;

  const MyApp({Key key, this.initIndex}) : super(key: key);

  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  TabController controller;

  @override
  Widget build(BuildContext context) {
    var initIndex = widget.initIndex;
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Netflix',
      theme: ThemeData(
        fontFamily: "GmarketSans",
        brightness: Brightness.dark,
      ),
      home: DefaultTabController(
        initialIndex: initIndex ?? 0,
        length: 5,
        child: Scaffold(
          backgroundColor: Colors.black,
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

class MyApp2 extends StatefulWidget {
  const MyApp2({Key key}) : super(key: key);

  @override
  _MyApp2State createState() => _MyApp2State();
}

class _MyApp2State extends State<MyApp2> {
  GlobalKey<NavigatorState> navigatorKey = GlobalKey<NavigatorState>();

  @override
  Widget build(BuildContext context) {
    return Container();
  }
}
