#include <iostream>

using namespace std;

int main() {
    int integerNumber;
    float floatNumber;
    string word;

    cout << "Insert a integer number: ";
    cin >> integerNumber;
    cout << "Insert a float number: ";
    cin >> floatNumber;
    cout << "Insert a string: ";
    cin >> word;

    cout << "The integer value is: " << integerNumber << endl;
    cout << "The float value is: " << floatNumber << endl;
    cout << "The string value is: " << word << endl;

    return 0;
}
