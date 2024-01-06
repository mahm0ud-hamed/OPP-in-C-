/*
Friend functions :-
private and protected member are accessed by the calss method only 
if you need to access it by another function make this function as fried function to the calss 

*/
#include<iostream>
using namespace std ; 

class Human{
	private :
	string name ; 
	int age ; 
	public : 
	Human(){
		name = "Mahmoud Hamed"; 
		age = 26 ; 
	}
	 void Display(){
		 cout<<"my name is"<<name <<endl<<"my age is "<<age<<endl; 
		 
	 }
	 /*decleration of the friend function */
	friend void Show(Human MAN);
};

int main(){
	Human mahmoud ; 
	Show(mahmoud) ; 
	return 0 ; 
}

void Show(Human MAN){
cout<<"my name is"<<MAN.name <<endl<<"my age is "<<MAN.age<<endl;
}