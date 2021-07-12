import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class Page1 extends StatefulWidget {
  const Page1({Key key}) : super(key: key);

  @override
  _Page1State createState() => _Page1State();
}

class _Page1State extends State<Page1> with AutomaticKeepAliveClientMixin {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
        child: Scaffold(
            appBar: AppBar(
              title: Text("Page 1"),
            ),
            body: Align(
                alignment: Alignment.center,
                child: Column(
                  children: [
                    FlatButton(
                        color: Colors.blue,
                        textColor: Colors.white,
                        onPressed: () {
                          Navigator.push(
                            context,
                            new CupertinoPageRoute(
                              builder: (BuildContext context) => new ListViewPage(),
                              fullscreenDialog: true,
                            ),
                          );
                        },
                        child: Text("with nav")),
                    FlatButton(
                        color: Colors.blue,
                        textColor: Colors.white,
                        onPressed: () {
                          Navigator.of(context, rootNavigator: true).push(
                            new CupertinoPageRoute(
                              builder: (BuildContext context) => new ListViewPage(),
                              fullscreenDialog: true,
                            ),
                          );
                        },
                        child: Text("without nav")),
                  ],
                ))));
  }

  @override
  bool get wantKeepAlive => true;
}

class ListViewPage extends StatelessWidget {
  const ListViewPage({Key key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: new Text("Infinite List"),
      ),
      body: ListView.builder(
        itemBuilder: (context, index) {
          return ListTile(
              leading: Text("$index"), title: Text("Number $index"));
        },
      ),
    );
  }
}
