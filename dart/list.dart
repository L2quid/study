void main(){
  List a=['1','2','String',4];
  print(a);
  print(a[1]);
  a.addAll([1,4,[1,2,'sd']]);
  print(a);
  print(a[6][2]);
  a.remove('1');
  print(a);
  print(a.reversed);
  print(a.first);
  print(a.last);
  print(a.last.first);
  print(a.isEmpty);
  a.forEach((element) {
    print('el : $element');
  });
  List b=[...a, 1,2];
  print(b);
}