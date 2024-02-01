#include <iostream>
#include <string>
using std:: cout;
using std :: endl;

int main (int argc,char const *argv[]) {
cout << "Got "<< argc<<"params \n"<< endl;
cout << "Program: "<< argv[0]<<endl;

for(int i=1;i < argc;++i){
    cout << "Param: "<< argv[i]<<endl;
    
}
return 0;
}
