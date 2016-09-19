//Copy constructor is called when a new object is created from an existing object
//And assignment operator is called when an already initialized object is assigned a new value from another existing object. 


#include<iostram.h>
#include<conio.h>
class krishna
{
  private :
    int x,y;
  public:
    //constroctor
    krishna(int a,int b)
    {
      x=a;
      y=b;
    }
    // copy constroctor
    krishna (krishna &k)
    {
        x=k.x;
        y=k.y;
    }
    krishna operator +(krishna & k);
    void show();
}
krishna krishna::operator = ()
{
  krishna sum;
  sum.x=x;
  sum.y=y;
  cout<<"assingment opertor is called";
  retun sum;
}
void krishna::show()
{
  cout<<x<endl<<y;
}
void main()
{
  clrscr();
  int x,y;
  cin>>x>>y;
  krishna k(x,y);
  krishna t(x,y);
  krishna j = k+t;
  krishna s;
  s=k+t;
  s.show()
  t.show()
  getch();
}
