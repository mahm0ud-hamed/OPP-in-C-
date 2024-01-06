#include <iostream>

using namespace std ; 



class Human{
	public :
	string name ; 
	void PrintName(void);
	void PrintMassage(void){
		cout<<"hello Iam a human \n "; 
		cout<<"my name is "<<name <<endl; ; 
	}
	
};

void Human:: PrintName(void){
	cout<<"Hello from the new function "<< Human::name <<endl; 
}
int main(void){
	Human Mahmoud ;
	Human* Ptr = new Human();
	Ptr->name ="Ammar Moahmed Hamed "; 
	Ptr->PrintMassage(); 
	Ptr->PrintName(); 
	Mahmoud.name= "mahmoud hamed ";
	Mahmoud.PrintMassage();
	Mahmoud.PrintName();
	return 0 ; 
}