enum Status {
  a,b,c,
}

void main(List<String> args) {
  dynamic status = Status.a;
  switch(status){
    case Status.a:
      print('a');
      break;
    case Status.b:
      print('b');
      break;
    case Status.c:
      print('c');
      break;
  }
}