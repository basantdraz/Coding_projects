#include <iostream>

using namespace std;

int main()
{
    string name ;
    int age;

    getline(cin, name);
    cin>> age;

    cout << "Hello " <<name << endl;
    cout << "your age " << age;
    return 0;
}
