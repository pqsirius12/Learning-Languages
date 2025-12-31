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

    // const (type qualifier, value can't be changed after initialization)
    const double PI = 3.14159265359;
    // PI = 22/7.0; error 

    // volatile (type qualifier, Value can change unexpectedly)
    // volatile tells the compiler that a variable’s value can change at any time, without the program changing it.
    volatile int semaphore = 0;

    // taking user input
    int your_age;
    std::cout << "How old are you?: ";
    std::cin >> your_age;
    
    std::string your_name;
    std::cout << "What's your name?: ";
    //std::cin >> your_name; // wont accept spaced words
    std::getline(std::cin >> std::ws, your_name); // try it out removing the std::ws

   

    std::cout << "Hello, " << your_name << '\n';
    std::cout << (your_age >= 18 ? "mature man" : "juvenile, come back when you're grown up") << '\n';






   return 0;
}