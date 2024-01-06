/*Constructor overloading */
/*function overloading :- writting the function with same name
  but with differet types or different number of parameters 
 */
 
#include<iostream>
using namespace std ; 

class Human{
	private: 
	string name ; 
	int age ; 
	public:
	Human(){
		cout<<"Default constructor"<<endl;  ; 
		age = 0 ; 
		name = "no name "; 
	}
	Human(string iname){
		cout<<"name input constructor" <<endl; ; 
		age = 0 ; 
		name = iname ; 
	}
	Human(int  iage){
		cout<<"age input constructor"<<endl; 
		age = iage ; 
		name = "No name " ; 
	}
	Human(int iage , string iname){
		cout<<"two parametre  input constructor"<<endl;  ; 
		age = iage ; 
		name = iname ; 
	}
	void Display(){
		cout<<name<<endl<<age<<endl; 
	}
};

int main(){
	Human Mahmoud; 
	Mahmoud.Display(); 
	return 0 ;
}