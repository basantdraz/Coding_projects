#include <iostream>

using namespace std;

int main()
{
    bool male = true ;
    bool tall = true;
 /*  cout << "Male? " ;
   cin>> male;
   cout << "Tall? " ;
   cin>> tall;*/

   if (male && tall){
       cout << "Tall Man " ;
   }
      else if (male && !tall){
       cout << "short Man " ;
   }
    else if (!male && tall){
       cout << "Tall Woman " ;
   }
      else if (!male && !tall){
       cout << "Short woman " ;
   }


}
