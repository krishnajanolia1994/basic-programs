//if execution time of a function  is less than contaxt switching of that function then we use inline fuction becuse of following  resson
// * when compiler find any function as inline function then it subtitute fuction calling statement by body of that funtion and do not pass control to that funtion
// it increase the efficiency of program but on same hand it increase the space requirement of program
// we should make small size function inline
//if we define a function inside a class then it becomes a inline function
#include<iosream.h>
#include<conio.h>
class krishna
{
  public:
  //if we define a function inside a class then it becomes a inline function
  void show()
  {
    cout<<"hey this is inline function inside a class";
  }
  void display();
}
//to define a function inline outside of class we have to use inline keword 
inline void krishna :: dispaly()
{
  cout<<"hey this is inline function outside the class";
}
void main()
{
  //object of krishna class
  krishna *k = new krishna;
  k->show();
  k->disply();
  getch();
}
