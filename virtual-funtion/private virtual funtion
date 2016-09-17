//we can declare a virtual funtion as a private member of calss
//following program expalin this thing
#include<iostram.h>
#include<conio.h>
class janolia;
// a class which contain private virtual function
class krishna
{
  private:
    virtua void display()
    {
      cout<<"hey this is krishna ";
    }
  public:
    friend int main();
};
class janolia
{
  public:
    void display()
    {
      cout<<"this is janolia";
    }
};
void main()
  {
    krishna *k ;
    janolia j;
    k=&j;
    k->display();
    getch();
  }
