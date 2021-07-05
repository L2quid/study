import 'package:flutter/material.dart';
import 'package:table_calendar/table_calendar.dart';
import 'package:flutter/foundation.dart';

class Event {
  final String title;
  final int id;
  final int display;

  Event({@required this.title, this.id, this.display});

  String toString() => this.title;
}

class CalTest extends StatefulWidget {
  @override
  _CalendarState createState() => _CalendarState();
}

class _CalendarState extends State<CalTest> {
  Map<DateTime, List<Event>> selectedEvents;
  CalendarFormat format = CalendarFormat.month;
  DateTime selectedDay = DateTime.now();
  DateTime focusedDay = DateTime.now();

  TextEditingController _eventController = TextEditingController();

  @override
  void initState() {
    selectedEvents = {
      DateTime.utc(2021, 7, 5): [
        Event(title: 'asdasd', id: 1, display: 1),
        Event(title: 'dasd', id: 2, display: 2)
      ],
      DateTime.utc(2021, 7, 2): [Event(title: 'asd', id: 2, display: 1)],
      DateTime.utc(2021, 6, 28): [Event(title: 'asd', id: 1, display: 1)],
      DateTime.utc(2021, 6, 22): [Event(title: 'asd', id: 1, display: 1)],
    };
    super.initState();
  }

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
              ),

              eventLoader: _getEventsfromDay,

              //To style the Calendar
              calendarStyle: CalendarStyle(
                outsideDaysVisible: false,
                cellMargin: EdgeInsets.only(bottom: 10),
                markersAnchor: 2,
                canMarkersOverflow :true,
                isTodayHighlighted: true,
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
