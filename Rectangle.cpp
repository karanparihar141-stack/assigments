#include<iostream>
using namespace std;
class Rectangle
{	
	private:
	float length,breadth;
	public:
void getData()
     {
	cout<<"enter length=";
	cin>>length;
	cout<<"enter breadth=";
	cin>>breadth;
     }
	float area();
	float perimeter();
void display()
     {
	cout<<"the area of Rectangle is:"<<area()<<endl;
	cout<<"the perimeter of Rectangle is:"<<perimeter()<<endl;
     }
     };
	float Rectangle::area()
	{
	return length*breadth;
	}
	float Rectangle::perimeter()
	{
	return 2*(length+breadth);
	}
int main()
{
Rectangle r;
r.getData();
r.display();
return 0;
}
