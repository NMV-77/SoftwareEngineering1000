#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    cout << "\nThe numbers extracted from input are: ";
    for (int i = 0; i <= input.length(); i++)
    {
        if (input[i] >= 48 && input[i] <= 57)
            cout << '\t' << input[i];
    }
    cout << "\n\n";

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int i=0;
    while (iss >> word) {       //Read the next word (if there is one)
        if (word == "the")
            i++;
        cout << word << endl;   //Output each word in turn
    }
    cout << "The number of time \'the\' appears in the sentence is:"<<i;

    
}

