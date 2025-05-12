#include <iostream>

using namespace std;

string getday(int dnu){
 string dname;

 switch(dnu){

  case 0:
      dname = "saturday";
       break;

   case 1:
      dname = "sunday";
      break;
      case 2:
      dname = "monday";
            break;

      case 3:
      dname = "tuesday";
            break;

      case 4:
      dname = "wensday";
            break;

      case 5:
      dname = "thursday";
            break;

      case 6:
      dname = "friday";
            break;
      default:
    dname= "mmmmmmm!!!";

 }
 return dname;
}
int main()
{
    cout << getday(8 ) << endl;

              /***************************************************************************************/

    int x = 1;
        while(x <=5)
        {
            cout << x << endl;
            x++;
        }
              /***************************************************************************************/
        int secnum = 2;
        int guess;
        while(guess != secnum)

        {
            cout << "Enter Secret num: ";
            cin >> guess;
        }

        cout << "you WIN XO";
                      /***************************************************************************************/



    return 0;
}
