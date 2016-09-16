#include<iostram.h>
#include<conio.h>
class krishna {
  public:
    krishna()    
    { cout<<"Constructor  base is called  \n"; }
    virtual ~krishna()
    { cout<<"Destructor of base calss is called \n"; }    
};
 
class derived: public krishna {
  public:
    derived()    
    { cout<<"Constructor  base is called  \n"; }
    ~derived()
    { cout<<"Constructor  base is called  \n"; }
};
 
int main(void)
{
  derived *d = new derived(); 
  krishna *k = d;
  delete k;
  getchar();
  return 0;
}
