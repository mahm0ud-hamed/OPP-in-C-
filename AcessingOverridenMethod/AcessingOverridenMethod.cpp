/*Accessing the overriden class method is by using the scope resolution operator */

#include<iostream>
using namespace std ; 

class Person {
	public : 
	void Dispaly(){
		cout<<"Hello iam a person"<<endl; 
	}
};

class student : public Person {
	public : 
	void Dispaly(){
		cout<<"Hello iam a student"<<endl; 
		/*acessing the overriden method inside the derived calss */
		//Person::Dispaly();
	}
};
int main(){
	student Mahmoud;
	
	Mahmoud.Dispaly(); 
	/*acessing the overridden base class method is by using the scope operator */
	Mahmoud.Person::Dispaly() ; 
}