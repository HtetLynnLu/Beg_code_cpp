#include <iostream>
#include <map>

int main (){
    std::map<char,int> My_dict{{'a',27},{'b',3}};
    for (const auto& [key,value] : My_dict){
        std :: cout << key << " has value\t" << value<< std ::endl;
    }
    return 0;
}