#include <iostream>

using namespace std;

int main()
{
    double n1 , n2 , res;
    char op;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> n2;

    if (op == '+'){
        res = n1+ n2;
    }

    else if (op == '*'){
        res = n1* n2;
    }
    else if (op == '/'){
        res = n1/ n2;
    }

    cout << "mmmm the answer is : " << res << endl;
    return 0;
}
