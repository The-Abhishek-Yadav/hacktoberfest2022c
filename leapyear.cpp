#include<iostream>
 
using namespace std;
 
int main()
{
    int year;
    cout<<"Enter Year(ex:1900):";
    cin>>year;
    
    if(year%100==0)
    {
        if(year%400==0)
        cout<<"\nLeap Year";
    }
    else
        if(year%4==0)
            cout<<"\nLeap Year";
        else
            cout<<"\nNot a Leap Year";
    
    return 0;
}
