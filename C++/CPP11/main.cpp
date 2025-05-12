#include <iostream>

using namespace std;

void numsp(int n){

if (n==0)
    return;
else
{
    numsp(n/10);
    cout<<n%10<< endl;

}
}
int main()
{
    numsp(15236);
    return 0;
}

