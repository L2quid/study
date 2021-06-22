import 'package:flutter/material.dart';
import 'package:sample_test/widget/infContents.dart';

class InfinityScroll extends StatefulWidget {
  @override
  _InfinityScrollState createState() => _InfinityScrollState();
}

class _InfinityScrollState extends State<InfinityScroll> {
  @override
  Widget build(BuildContext context) {
    return InfContents();
  }
}
