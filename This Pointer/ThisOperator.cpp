#include<iostream>
using namespace std ;


class Person{
	public : 
	int age ; 
	void SetAge(int age){
		this->age = age ; 
	}
	void Display(void){
		cout<<"my age was"<<this->age <<endl; 
	}
};

int main(){
	Person Mahmoud ; 
	Mahmoud.SetAge(26) ; 
	Mahmoud.Display();
}