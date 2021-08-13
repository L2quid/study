import 'package:carousel_slider/carousel_slider.dart';
import 'package:flutter/material.dart';
import 'package:sample_test/model/model_movie.dart';

class CarouselImage extends StatefulWidget {
  final List<Movie> movies;

  CarouselImage({this.movies});

  _CarouselImageState createState() => _CarouselImageState();
}

class _CarouselImageState extends State<CarouselImage> {
  List<Movie> movies;
  List<Widget> images;
  int _currentPage = 0;

  @override
  void initState() {
    super.initState();
    movies = widget.movies;
    images = movies.map((m) => Image.asset('./assets/' + m.poster)).toList();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
      child: Column(
        children: <Widget>[
          CarouselSlider(
            items: images,
            options: CarouselOptions(onPageChanged: (index, reason) {
              setState(() {
                _currentPage = index;
              });
            }),
          ),
          Container(
            child: Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: makeIndicator(images, _currentPage),
            ),
          )
        ],
      ),
    );
  }
}

List<Widget> makeIndicator(List list, int _currentPage) {
  List<Widget> results = [];
  for (var i = 0; i < list.length; i++) {
    results.add(Container(
      width: 6,
      height: 6,
      margin: EdgeInsets.symmetric(vertical: 10.0, horizontal: 4.0),
      decoration: BoxDecoration(
          shape: BoxShape.circle,
          color: _currentPage == i ? Color(0xff000000) : Color(0xffc4c4c4)),
    ));
  }

  return results;
}
