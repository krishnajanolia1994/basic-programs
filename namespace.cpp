#include <iostream>
using namespace std;
 
// Variable created inside namespace
namespace krishna 
{
  int k =10;
}
 
// Global variable
int k = 20;
 
void main()
{
  // Local variable
  int k = 200;
  cout<<krishna::k<<endl<<::k<<endl<<k;
}
