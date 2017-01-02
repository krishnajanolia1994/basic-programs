Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted,
//with their storage being handled automatically by the container
1. reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
2. at(g) – Returns a reference to the element at position ‘g’ in the vector
3. front() – Returns a reference to the first element in the vector
4. back() – Returns a reference to the last element in the vector

//The pair container is a simple container defined in <utility> header consisting of two data elements or objects.
//The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
#include<iosream.h>
#include<conio.h>
#include<utility.h>
#include<string.h>
void main()
{
vector <int>g;
int i;
int k;
for(i=0;i<10;i++)
{
  cin>>k;
  g.push_back(k);
} 
for(i=0;i<10;i++)
{
  cout<<endl<<g.at(k);
} 
getch();
}
