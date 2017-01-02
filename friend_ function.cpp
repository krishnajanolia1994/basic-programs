#include<iostream.h>
#include<conio.h>
class krishna 
{
  ptivate:
    int x;
  public:
    krishna(int k)
    {
      x=k;
    }
    friend int squar();
    friend class k;
}
//friend function definetion
int squar()
{
  int n;
  cout<<"enter a number";
  cin>>n;
  krishna *k = new krishna(n);
  //friend function access private member of a class
  n=k->x*k->x;
  delete k;
  return n;
}
class k
{
  public :
    void disply (krishna &k)
    {
      //frind class object access private member of a class
      cout<<k.x;
    }
};
void main()
{
clrscr();
int x;
cout<<"enter a number";
cin>>x;
krishna *t = new krishna(x);
//friend class object is created
class k;
k.disply();
delete t;
//friend funtion is callled
cout<<"squar of a number is"<<squar();
getch();
}
