#include <iostream>

namespace first{
    int x = 10;
    int y = 100;

    void show(){
        std::cout << "Inside namespace 'first' " << '\n';
    }
}
namespace second{
    int x = 20;
    int y = 200;
}

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

    // Namespace is a language feature used to group related identifiers 
        //(such as variables, functions, and classes) under a named scope. 
        //It helps organize code and prevent name conflicts, especially in large programs or 
        //when multiple libraries define identifiers with the same names.
    
    
    int x = 0;
    std::cout << "x = " << x << '\n';
    std::cout << "x = " << first::x << '\n';
    std::cout << "x = " << second::x << '\n';

    using namespace first;
    show();
    std::cout << "y = " << y << '\n';

    //using second::x; error message conflicting with local x
    using second::y;
    using std::cout;

    cout << "y = " << y << '\n';
    cout << "y = " << first::y << '\n';

    // typedef is used to create a new name (alias) for an existing data type, 
        //making complex types easier to read and use.

    // using is a modern alternative to typedef that also creates type aliases, 
        //with clearer syntax and better support for templates.
    
    typedef int number;
    using string = std::string;

    number flower_petals = 5;
    string flower_name = "Hibiscus";

    cout << flower_name << "has " << flower_petals << "petals" << '\n';
    cout << 'ab' << std::endl; 
    // output: 249305b 'a' → 97 → 0x61  'b' → 98 → 0x62 'ab' → 0x6162 (hex) → 24930 (decimal)
    // ('a' << 8) + 'b' 
    // Double quotes " " → string literal
    // Single quotes ' ' → character literal

    // arithmetic operator : + - * / %
    // type conversions - implicit and explicit

    // if else if else
    // switch case break default

    // ternary operators

    // Logical operators && || !

    // Loops : while do while for

    // break and continue









   return 0;
}