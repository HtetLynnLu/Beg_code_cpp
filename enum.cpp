#include <iostream>

int main (){

    enum class RGB{RED,BLUE,GREEN};
    RGB colour = RGB :: GREEN;

    switch (colour){
        case RGB::RED:
        std ::  cout << "red\n";
        break;
        case RGB::BLUE:
        std :: cout << "blue\n";
        break;
        case RGB:: GREEN:
        std :: cout << "green\n";
        break;
    return 0;
    }

}