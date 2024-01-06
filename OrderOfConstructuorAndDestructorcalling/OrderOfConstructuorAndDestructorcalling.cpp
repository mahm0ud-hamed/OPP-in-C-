/*the calling of construvtor start with the constructor of the base class and then the derived 
  the calling of the destructor start with derived class and then the base class*/
  
#include<iostream>
using namespace std; 

class Person{
	public:
	Person(){
		cout<<"the constructor of the base class "<<endl;
	}
	~Person(){
		cout<<"the destructor of the base class "<<endl;
	}
} ; 

class Student : public Person{
	public :
	Student(){
		cout<<"the constructor of the Derived class "<<endl;
	}
	~Student(){
		cout<<"the destructor of the Derived class "<<endl;
	}
};

int main(){
	Student mahmoud ; 
}