#include<iostream>
using namespace std;

class Ratio
{
public:
void print()
{
cout<<"\n now x is alive \n";
}
Ratio()
{
cout<<"\n object is born";
}
~Ratio()
{
cout<<"object dies";
}
};
int main()
{
    
Ratio r1;
r1.print();

}
