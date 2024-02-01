#include <iostream>
using std :: cout;
using std :: endl;

std ::string SayHello (const std ::string& to_whom="world") {
    return "Hello" + to_whom + "!";
}
int main (){
    cout << SayHello()<< endl;
    cout << SayHello("student")<<endl;
    return 0;
}