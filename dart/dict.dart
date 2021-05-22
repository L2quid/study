void main(){
  Map dict = {
    1:'1',
    2:'2',
  };
  print(dict);
  print(dict[1]);
  dict.addAll({3:'3'});
  print(dict);
  dict[1]=11;
  print(dict);
  print(dict.keys.toList());
  print(dict.values.toList());
}