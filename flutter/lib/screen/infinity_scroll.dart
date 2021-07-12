import 'package:flutter/material.dart';
import 'package:sample_test/widget/infContents.dart';

class InfinityScroll extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      body: SafeArea(child: InfContents()),
    );
  }
}
