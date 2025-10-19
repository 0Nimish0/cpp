#include <iostream>

int main(){

    // type conversion = conversion a value of one data type to another 
    //                   there are two data types in this
    //                   Implicit = automatic
    //                   Explicit = Precede value with new datatype

    int marks = 8;
    int qestions = 10;
    double score = marks/(double)qestions * 100;

    std:: cout << score << '%';


    return 0;
}