#include <iostream>

using namespace std;
class chef
{
public:
    void checken()
    {
        cout << " ymmmy"<< endl;
    }
    void salad ()
    {
        cout << " mmm x"<< endl;
    }
    void burger()
    {
        cout << " woooooow"<< endl;
    }
};
class italianchef : public chef{
    public:
void pasta (){
cout << " <3 XD" << endl;
}
};
int main()
{
    chef chef1;
    chef1.burger();
    italianchef chef2;
    chef2.pasta();
    chef2.salad();
    return 0;
}
