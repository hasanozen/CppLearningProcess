#include <iostream>

using namespace std;

int main() {

    int age; //This variable will have a value that already been in the memory allocated for this variable
    int initializedAge {0}; //This value will clear and set value of 0 in its allocated memory, also initializedAge = 0 can be used

    cout << "NOT initialized age is " << age << endl;
    cout << "Initialized age is " << initializedAge << endl;

    return 0;
}
