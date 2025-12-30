#include <iostream>

int main(){
    // Single Line comment
    /*
        This
        is
        a
        multi-line 
        comment 
    */

    // integer
    int age = 21;
    int year = 2025;
    std::cout << "This is " << year << std::endl;

    // float/double (decimal value)
    float price = 12.78;
    double temperature = 24.5;
    std::cout << "The temperature outside is " << temperature << " celcius." << std::endl;

    // char (single charecter)
    char sex = 'M';
    char demo = 'ab'; // shows a compile time warning, uses the last charecter i.e., b
    std::cout << "Trying the variable \"demo\" " << demo << '\n';

    // boolean (true or false)
    bool isMale = true;
    bool isHungry = false;
    std::cout << "Is he hungry? " << std::boolalpha << isHungry << std::endl;

    // string (objects that represent a sequence of text)
    std::string name = "Dr. House";
    std::cout << "Hello there, " << name << std::endl;





   return 0;
}