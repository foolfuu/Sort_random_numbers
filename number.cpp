#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int max,min,a[100],Random;
    max = 1001;
    min = 1;
    for(int i = 0 ; i < 100 ; i++)
    {
        Random = rand()%(max - min) + min;
        a[i] = Random;
    }


    cout<<endl<<endl<<endl;


    for(int i = 0 ; i < 100 ; i++)
    {
        cout<<a[i]<<" ";
    }



    cout<<endl<<endl<<endl;


    int temp;
    for(int d = 0 ; d < 100 ; d++)
    {
        for(int j = 0 ; j < 100 ; j++)
        {
            if(a[d] < a[j])
            {
                temp = a[d];
                a[d] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0 ; i < 100 ; i++)
    {
        cout<<a[i]<<" ";
    }
    getch();
}