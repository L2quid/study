function a(){
    console.log('a');
}
a();

var b = function(){
    console.log('b')
}
b();

function slow (callback){
    callback();
}

slow(a);
slow(b);