#include <iostream>

using namespace std;

double cub(double num){
   double res = num* num* num;
   return res;
}

int main()
{
    cout << cub(5.0) << endl;
        cout << cub(3.0) << endl;
    cout << cub(12.0) << endl;

    return 0;
}
