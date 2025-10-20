#include <iostream>

int main (){

    int age;

    std::cout << " enter your age : " ;
    std::cin >> age;

    // order of the if_else statments matters

    if(age >= 18){
        std::cout << " You can vote" ;
    }

    else if(age <= 0){
        std::cout << " You are not born yet.. ";
    }

    else{
        std::cout << " You can not vote";
    }

    return 0;
}