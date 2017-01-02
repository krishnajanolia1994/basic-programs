#include<iostream.h>
#include<conio.h>
 
class Base
{
public:
    int fun()
    {
        cout<<"Base fun() is  called";
        return 0;
    }
    int fun(int i)
    {
        cout<<"fun(int i) is  called";
        return i;
    }
};
 
class Derived: public Base
{
public:
    int fun()
    {
        cout<<"Derived fun() is called";
    }
};
 
int main()
{
    int k;
    cout<<"enter a number";
    cin>>k;
    Derived d;
    d.fun(k);  // Compiler Error
    return 0;
}
