#include <iostream>

int main (){

    std::string name;
    int age;

    // std:: cout << " what's your name ? :  ";
    // std:: cin >> name;

    std:: cout << " what's your age ? :  ";
    std:: cin >> age;
    // whenever we use noraml steps to store user input before a getline
    // function in out put buffer it auto add a "\n"


    // To store a string which contain spaces use function called "getline"
    std:: cout << " what's your full name ? :  ";
    std:: getline(std::cin >>std::ws, name); //this line removes the '\n'


    std:: cout << " Hello  " << name;
    std:: cout << " your age is  " << age;


    return 0;
}