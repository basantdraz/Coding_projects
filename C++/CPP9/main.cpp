#include <iostream>

using namespace std;
 class book
{
public:
    int page;
    string name;
    book(){
    cout << "fun creating " << endl;
    }
    /*ممكن نبدل اننا نعمل كل متغير لوحده في المين ب اللي جاي

    book(int apage , string aname){
    apage = page;
    aname = name;
    }
    */
};
int main()
{
    /* book book1 (50, "name"); */
    book book1;
    book1.page = 50;
    book1.name ="O0ps nest my name ;p";

    cout << book1.name << endl;
    return 0;
}
