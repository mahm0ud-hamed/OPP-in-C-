/* 1- costructor is a special function or method that has no return type - 
	  and the same name of the calss  */
/* 2- this special function is called when you creat an object of the class */
/* 3- you can't call the default constructor in your programm its only called automatically when programm run 
   4- it's yoused to initialization
   5- and its must be in the public section */
#include<iostream>

using namespace std ; 


class Human{
	private : 
	string name ; 
	int age ; 

	public:
	Human(){
		name = "Mahmoud Mohamed Hamed "; 
		age  = 26 ; 
		cout<<"Iam Called by deafult when creat an object from me "<<endl;
		cout<<"hello from the constructor "<<endl; 
	}
	void PrintData(void);
};
/******************* Main function *********************/
int main(){
	Human mahmoud ;
	mahmoud.PrintData(); 
	
} 
/*******************************************/
void Human:: PrintData(void){
	cout<<"my name is "<<name<<endl; 
	cout<<"my age was "<<age<<endl; 
}