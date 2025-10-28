#include <iostream>

int main()
{
    std::string name;
    
    std::cout << " Enter your name : ";
    std::getline (std::cin, name);

    if(name.length() > 12){
        std::cout << " please enter only limited characters (12)";
    }
    else{
        std::cout << "hello" << name ;
    }

    return 0;
}