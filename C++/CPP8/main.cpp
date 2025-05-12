#include <iostream>

using namespace std;

int power(int base, int no)

{
    int res = 1;
    for(int  j=0 ; j <no ; j++)
    {
        res = res * base;
    }
    return res;
}
int main()
{
    cout << "Hello Basantota!" << endl;
    int num[]={3, 2 , 5 ,6 ,9};

        for (int i =0; i<5; i++)
        {
            cout<< num[i] << endl;
        }

        cout<< power(5,3) << endl;

                     /***************************************************************************************/
        int arr[3][2]= {
        {2,5},
        {8,9},
        {6,2},
        }    ;

        for(int x=0 ; x<3; x++)
        {
            for (int y= 0; y<2; y++)
            {
                cout << arr[x][y]<< " ";
            }
            cout<< endl;
        }


                     /***************************************************************************************/


    return 0;
}
