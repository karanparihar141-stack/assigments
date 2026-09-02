#include<iostream>
#include<string>
using namespace std;

class Student
{
      private:
        int roll_no;
	string name;
	float marks; 
	
      public:
	void accept()
	{
	 cout<<"enter your roll no:";
	 cin>>roll_no;
	 cout<<"enter your name";
	 cin.ignore();
	 getline(cin,name);
	 cout<<"enter your marks:";
	 cin>>marks;
	}
void calculateResult()
       {
	if(marks>=40)
	cout<<"result:you're pass"<<endl;
	else
	cout<<"result:you're fail"<<endl;
       }
void display()
       {
	cout<<"\n...STUDENTS DETAILS..."<<endl;
	cout<<"roll no:"<<roll_no<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"marks:"<<marks<<endl;
      calculateResult();
       }
};
int main()
{
students s;
s.acceept();
s.display();
  return 0;
} 
    	
