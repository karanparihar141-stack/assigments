//#include<iostream>
//using namespace std;

//class Animal{
//public:
	//void eat(){
	//cout<<"the animal eats"<<endl;
//	}
//};
//class Cat:public Animal{
//public:
	//void eat(){
	//cout<<"cat eats often"<<endl;
	//}
//};
//int main(){
//Animal a;
//a.eat();
//Cat c;
//c.eat();
//return 0;
//}


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "the animal eats" << endl;
    }
};

class Cat : public Animal {
public:
    void eat(){ 
        cout << "cat eats often" << endl;
    }
};

int main() {
    Animal* ptr;
    Cat c;

    ptr = &c;
    ptr->eat();   
    return 0;
}
