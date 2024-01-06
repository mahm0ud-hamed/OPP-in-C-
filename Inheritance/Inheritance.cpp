/*Inheritance*/
/*acessing the feature of a class in another class*/
/*
/***********************************************************/
/*type of inheritance*/ 
/***********************************************************
-------------------------
*public inheritance* 
1- all protected member are iherite as public into the derived class 
2- all public member are inherite as public im=n side the derived class
-------------------------
*protected inehritance*
1- public and protected member in the base class are treated like protected member in the derived calss
2-
-------------------------
*private inheritance 
1- 
2-  
*/
#include<iostream>
using namespace std ; 

class Person{

	public:
	string name ; 
	int age ;
	void SetName(string Iname){
		name = Iname ; 
	}
	void SetAge(int Iage){
		age = Iage ; 
	}
	
}; 

/*the class student inherite the public attributes and methode from the calss person */
class Student : public Person{
	public: 
	int Id ; 
	void SetID(int I_id){
		Id = I_id ; 
	}
	void Display(){
		cout<<"hello... iam "<<name<<endl; 
		cout<<"my age is "<<age<<endl; 
		cout<<"my ID is "<<Id<<endl; 
		
	}
};
int main(){
	Student Mahmoud; 
	Mahmoud.SetName("Mahmoud Mohamed Hamed"); 
	Mahmoud.SetAge(26);
	Mahmoud.SetID(241097); 
	Mahmoud.Display();
}