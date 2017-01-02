//Ideally delete operator should not be used for this pointer
//we can only delete only those this pointer whose object is created by new
#include<iostream.h>
#include<conio.h>
class krishna
{
  int x;
  public : 
    void del()
    {
      delete this;
    }
    void show()
    {
      cout<<"hey";
    }
}
void main()
{
  krishna *k = new krishna;
  k->del();
  // the below statement produse error becase this pointer is deleted in above statement
  k->show()
  getch();
}
