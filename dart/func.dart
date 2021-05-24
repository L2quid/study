void main() {
  say('이름', age: 30);
  say('이름2');
  print(arrow('jae'));
  String num1 = func1();
  print(num1);
}

Future<void> say(String name, {int age: 10}) async {
  print('${name}님 ${age}');
}


// String arrow(name){
//   return "hello $name";
// }
String arrow(String name) => 'hello $name';

String func1() => '안녕'; 