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
}