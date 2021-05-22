void main(List<String> args) {
  //final 런타임
  final name = 'name1';
  //const 빌드타임
  const name2 = 'name2';

  print(name +'\t'+ name2);

  final now = new DateTime.now();
  print(now);

  // const -> 빌드될때 무조건 값이 있어야함 datetime은 런타임때 값이 지정됨
  //const now2 = new DateTime.now();
  //print(now2);


}