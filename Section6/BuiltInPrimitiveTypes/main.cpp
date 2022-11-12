#include <iostream>

using namespace std;

int main(){
    // Character type
    char typeCharacter {'J'};
    cout << "Character Type: " << typeCharacter << endl;

    // Integer types
    unsigned short typeShort {55};
    cout << "Unsigned Short Type: " << typeShort << endl;

    int typeInt {65};
    cout << "Int Type: " << typeInt << endl;

    long typeLong {55544433};
    cout << "Long Type: " << typeLong << endl;

    long long typeLongLong {9'461'000'000'000};
    cout << "Long Long Type: " << typeLongLong << endl;

    // Floating type
    float typeFloat {401.23};
    cout << "Float Type: " << typeFloat << endl;

    double typeDouble {3.14159};
    cout << "Double Type: " << typeDouble << endl;

    long double typeLongDouble {2.7e120};
    cout << "Long Double Type: " << typeLongDouble << endl;

    //Boolean Type
    bool typeBoolean {true};
    cout << "Boolean Type: " << typeBoolean << endl;

    return 0;
}