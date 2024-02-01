#include <iostream>

 void Counter(){
     static int counter =0;
     std :: cout << "counter state = "<<++counter<<'\n';
 }

 int main (){

    for (size_t i =0;i <5 ;i++){
        Counter();
    }
    return 0;
 }