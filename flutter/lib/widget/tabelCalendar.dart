import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:table_calendar/table_calendar.dart';
import 'package:flutter/foundation.dart';

/*
//-> json 받아오기
 List<Map<String,dynamic>> data =[
    {"date":"2021-07-05 00:00:00.000Z","data":{"title":'asd', "id":1, "display":1}},
    {"date":"2021-07-02 00:00:00.000Z","data":{"title":'qwe', "id":2, "display":1}},
    {"date":"2021-06-28 00:00:00.000Z","data":{"title":'zxc', "id":1, "display":1}},
  ];

        */

class Event {
  final String title;
  final int id;
  final int display;

  Event({@required this.title, this.id, this.display});

  String toString() => this.title;

  Event.formMap(Map<String, dynamic> map)
      : title = map['title'],
        id = map['id'],
        display = map['display'];
}

class CalTest extends StatefulWidget {
  @override
  _CalendarState createState() => _CalendarState();
}

class _CalendarState extends State<CalTest> {
  Map<DateTime, List<Event>> selectedEvents={};
  CalendarFormat format = CalendarFormat.month;
  DateTime selectedDay = DateTime.now();
  DateTime focusedDay = DateTime.now();
  List<String> monthList =["1월","2월","3월","4월","5월","6월","7월","8월","9월","10월","11월","12월"];

  TextEditingController _eventController = TextEditingController();

  get http => null;

  @override
  void initState() {
    selectedEvents = {
      DateTime.utc(2021, 7, 5): [
        Event(title: 'asdasd', id: 1, display: 1),
        Event(title: 'dasd', id: 2, display: 0)
      ],
      DateTime.utc(2021, 7, 2): [Event(title: 'asd', id: 2, display: 1)],
      DateTime.utc(2021, 6, 28): [Event(title: 'asd', id: 1, display: 1)],
      DateTime.utc(2021, 6, 22): [Event(title: 'asd', id: 1, display: 1)],
    };
    super.initState();
  }
  // Future _fetchEvent() async {
  //   //데이터 받아오기
  //   await http
  //       .get(Uri.parse("http://18.216.47.35:3000/?page=1&limit=2"))
  //       .then((res) {
  //     if (res.statusCode == 200) {
  //       String jsonString = res.body;
  //       List data = jsonDecode(jsonString);
  //       for (var i = 0; i < data.length; i++) {
  //         Event a = Event.formMap(data[i]["data"]);
  //         selectedEvents[DateTime.parse(data[i]["date"])] = [a];
  //       }
  //     }
  //   });
  // }

  List<Event> _getEventsfromDay(DateTime date) {
    return selectedEvents[date] ?? [];
  }

  @override
  void dispose() {
    _eventController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("CalendarTest"),
        centerTitle: false,
      ),
      body: Container(
        child: Column(
          children: [
            TableCalendar(
              focusedDay: selectedDay,
              firstDay: DateTime(1990),
              lastDay: DateTime(2050),
              calendarFormat: format,
              onFormatChanged: (CalendarFormat _format) {
                setState(() {
                  format = _format;
                });
              },
              startingDayOfWeek: StartingDayOfWeek.sunday,
              daysOfWeekVisible: true,

              //Day Changed
              onDaySelected: (DateTime selectDay, DateTime focusDay) {
                setState(() {
                  selectedDay = selectDay;
                  focusedDay = focusDay;
                });
              },
              selectedDayPredicate: (DateTime date) {
                return isSameDay(selectedDay, date);
              },
              calendarBuilders: CalendarBuilders(
                singleMarkerBuilder: (context, date, event) {
                  if (event.display == 1) {
                    return Image.asset(
                      'assets/logo' + event.id.toString() + '.png',
                      fit: BoxFit.cover,
                      height: 20,
                    );
                  } else {
                    return Container();
                  }
                },
                defaultBuilder: (context, date, events) {
                  if (date.weekday == 6) {
                    return Container(
                        margin: const EdgeInsets.only(bottom: 10),
                        alignment: Alignment.center,
                        child: Text(
                          date.day.toString(),
                          style: TextStyle(color: Colors.blue),
                        ));
                  } else {
                    return null;
                  }
                },
                dowBuilder: (context,date){
                  if (date.weekday==DateTime.saturday){
                    return Center(
                      child: Text(
                        'Sat',
                        style: TextStyle(color: Colors.blue),
                      ),
                    );
                  }else if (date.weekday==DateTime.sunday){
                    return Center(
                      child: Text(
                        'Sun',
                        style: TextStyle(color: Colors.red),
                      ),
                    );
                  }{
                    return null;
                  }
                },
              ),

              eventLoader: _getEventsfromDay,

              //To style the Calendar
              calendarStyle: CalendarStyle(
                outsideDaysVisible: false,
                cellMargin: EdgeInsets.only(bottom: 10),
                markersAnchor: 2,
                canMarkersOverflow: true,
                isTodayHighlighted: true,
                markersMaxCount: 1,
                selectedDecoration: BoxDecoration(
                  shape: BoxShape.rectangle,
                  borderRadius: BorderRadius.circular(5.0),
                ),
                selectedTextStyle: TextStyle(color: Colors.black),
                todayTextStyle: TextStyle(color: Colors.black),
                todayDecoration: BoxDecoration(
                  shape: BoxShape.rectangle,
                  borderRadius: BorderRadius.circular(5.0),
                ),
                defaultDecoration: BoxDecoration(
                  shape: BoxShape.rectangle,
                  borderRadius: BorderRadius.circular(5.0),
                ),
                holidayTextStyle: TextStyle(color: Colors.blue),
                weekendTextStyle: TextStyle(color: Colors.red),
                weekendDecoration: BoxDecoration(
                  shape: BoxShape.rectangle,
                  borderRadius: BorderRadius.circular(5.0),
                ),
              ),
              headerStyle: HeaderStyle(
                headerPadding: EdgeInsets.all(20),
                leftChevronVisible: false,
                rightChevronVisible: false,
                formatButtonVisible: false,
                titleCentered: false,
                formatButtonShowsNext: false,
                titleTextFormatter: (date, locale) => monthList[date.month-1].toString(),
                formatButtonTextStyle: TextStyle(
                  color: Colors.white,
                ),
              ),
            ),
            ..._getEventsfromDay(selectedDay).map(
              (Event event) => ListTile(
                title: Text(
                  event.title,
                ),
              ),
            ),
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton.extended(
        onPressed: () => showDialog(
          context: context,
          builder: (context) => AlertDialog(
            title: Text("Add Event"),
            content: TextFormField(
              controller: _eventController,
            ),
            actions: [
              TextButton(
                child: Text("Cancel"),
                onPressed: () => Navigator.pop(context),
              ),
              TextButton(
                child: Text("Ok"),
                onPressed: () {
                  print(selectedEvents);
                  if (_eventController.text.isEmpty) {
                  } else {
                    if (selectedEvents[selectedDay] != null) {
                      selectedEvents[selectedDay].add(
                        Event(title: _eventController.text),
                      );
                    } else {
                      selectedEvents[selectedDay] = [
                        Event(title: _eventController.text)
                      ];
                    }
                  }
                  Navigator.pop(context);
                  _eventController.clear();
                  setState(() {});
                  return;
                },
              ),
            ],
          ),
        ),
        label: Text("Add Event"),
        icon: Icon(Icons.add),
      ),
    );
  }
}
