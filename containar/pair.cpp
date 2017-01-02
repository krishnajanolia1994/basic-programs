//The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 
//The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second). 
#include<iosream.h>
#include<conio.h>
#include<utility.h>
#include<string.h>
void main()
{
  pair <string , int >k;
  k.first="krishna";
  k.second=10;
  cout<<k.first<<k.second;
  getch();
}

