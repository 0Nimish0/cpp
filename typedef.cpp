#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int nummber_t;

using text_t = std::string;
using number_t = int;


int main(){

    // typedef = reserved keyword used to creat  an additional name 
    //           for another data type.
    //           New identifier for an existing type 
    //           Helps with redability  and reduces typos
    //           Use when there is a clear benefit
    //           replaced with 'using' (work better for templates)
    


    text_t firstName = "Nimish";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;

}