//when we use copy controctor or assingnment operator
//when we need to initialisec a pointer variable of class
   // if we do not do so then change in one object value reflects in anothre object data member values
#include<iostram.h>
#include<conio.h>
class krishna
{
  private :
    int *x;
  public:
    //constroctor
    krishna(int a)
    {
      *x=a;
    }
    // copy constroctor
    krishna (krishna &k)
    {
     *x=k.(*x);
    }
    krishna operator +(krishna & k);
    void show();
}
krishna krishna::operator = ()
{
  krishna sum;
  sum.(*x)=*x;
  cout<<"assingment opertor is called";
  retun sum;
}
void krishna::show()
{
  cout<<*x;
}
void main()
{
  clrscr();
  int x;
  cin>>x;
  krishna k(x);
  krishna t(x);
  krishna j = k+t;
  krishna s;
  s=k+t;
  s.show()
  t.show()
  getch();
}
