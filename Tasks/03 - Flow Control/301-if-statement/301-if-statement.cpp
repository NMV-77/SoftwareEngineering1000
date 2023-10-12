/*

    If statements

    Note here that I am using the C++ cout to write to the console. You can use printf if you prefer,
    but I want to start moving towards C++ and away from C where there are advantages

*/ 

#include <iostream>

// The fuly qualified name for cout is actually std::cout
// :: is known as the "scoping operator" - more on this later
// std is known as a "namespace" - it is a prefix that helps us avoid replicating names
// The standard C++ library uses std:: prefix for many of it's functions
// It is tedious to write this every time, so we make the default namespace std
using namespace std;

int main()
{
    //Some constants 
    const int high = 100, low = 10;
    
    // start filling the tank 
    int level = 5;

    //Read the keyboad to get the level
    //Repeat until a valid value has been added
    do {
        cout << "Please enter a level (between 0 and 100)" << endl;
        cin >> level;
        if (level > 100 || level < 0)
        {
            cout << "This is an erroneous value. Enter the value between 0 and 100\n";
            continue;
        }
    } while (level < 0||level>100);

    if (level == 0)
        cout << "The tank is empty\n";

    else if (level <= low)                       // check the level
    {
        cout << "Tank needs filling" << endl;
    }

    else if (level > low)                       // monitor the level
    {
        cout << "Tank has sufficient fuel for now" << endl;
    }

    else if (level == high)                       // monitor the level
    {
        cout << "Tank is full" << endl;
    }

}
