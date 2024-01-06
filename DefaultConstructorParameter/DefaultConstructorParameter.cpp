#include<iostream>
/* if you pass an default vallue parameter to constructor then no need for the default cnstrucror 
*/
using namespace std ; 

class Human{
	private: 
	int age ; 
	string name ; 
	public: 
	Human(int iage=26 , string iname= "no name "){
		cout<<"parameter constructor"<<endl; 
		name = iname ; 
		age  = iage ; 
	}
	void Display(void);
};
 int main(){
	Human mahmoud;
	mahmoud.Display();
 }
 
 void Human:: Display(void){
	 cout<<name<<endl<<age<<endl; 
 }
