void main() {
  //var 형식
  var name= '이름1';
  print(name);
  name='이름변경';
  print(name);
  var name2='이름2';
  print(name2);

  String name3='이름3';
  String concat='합치기';
  print(name3+' '+concat+ ' 입니다.');
  print('$name3 $concat'+' 입니다.');
  print('${name3 +' '+ concat} 입니다.');
}