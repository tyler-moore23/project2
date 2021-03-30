#include <iostream>
using namespace std;

void display(string line, string choice)
{
    string check = choice.substr(1, choice.length);
    char c = check[0];
    switch (c)
    {
        case 'd':
            cout << "The directories were found at this line: ";
            cout << line.find("directories") << endl;
            break;
        case 'f':
            cout << "The files were found at this line: ";
            cout << line.find("files") << endl;
            break;
        case 'b':
            cout << "The bytes were found at this line: ";
            cout << line.find("bytes") << endl;
            break;
    }
}

int main()
{
    string stringInput;
    string choiceInput;
    cout << "Hello." << endl;
    cout << "Please enter a line to be parsed by the program." << endl;
    cin >> stringInput;
    cout << "Now please enter either -d, -f, or -b to define how to parse the program." << endl;

    display(stringInput, choiceInput);
}


