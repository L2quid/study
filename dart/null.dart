void main(List<String> args) {
  var name;
  print(name);
  print(name ?? '널');
  print(name?.toString());

  var name2='asd';
  print(name2);
  print(name2 ?? '널');
  print(name2?.toUpperCase());
}