#include <iostream>

using namespace std;

int main()
{
    /*Define All Variables.*/
    int a,b,c,d;

    cout << " -: Welcome To Your Favorite Calculator :- "<<endl<<endl;
    cout<<"Please Enter Your First Value :- ";
    cin>>a;
    cout<<"Please Enter Your Second Value :- ";
    cin>>b;

    cout<<endl<<"PLEASE PRESS 1 TO GO. :- ";
    cin>>c;
    /*Coding for Addition.*/
    if(c=1)
    {
        cout<<endl<<"               Your (Addition) Answer = "<<a+b<<endl;
    }
    else
        cout<<"You're Putting Wrong Value! Please Try Again.";
    /*Coding for Sub.*/
    if(c=1)
    {
        cout<<endl<<"               Your (Subtraction) Answer = "<<a-b<<endl;
    }
    else
        cout<<"You're Putting Wrong Value! Please Try Again.";

    /*Coding for Multiplication.*/
    if(c=1)
    {
        cout<<endl<<"               Your (Multiplication) Answer = "<<a*b<<endl;
    }
    else
        cout<<"You're Putting Wrong Value! Please Try Again.";

    /*Coding for Division.*/
    if(c=1)
    {
        cout<<endl<<"               Your (Division) Answer = "<<a/b<<endl;
    }
    else
        cout<<"You're Putting Wrong Value! Please Try Again."<<endl<<endl;

    cout<<endl<<endl<<"THANK YOU! FOR USING ME :) "<<endl;
    cout<<"AIO-Calculator Design By Arbaz Ansari"<<endl<<endl;

    cout<<"Press 1 To Exit. "<<endl;
    cin>>d;
    return 0;
}
