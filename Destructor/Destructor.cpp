/*
destructor is a special member function to a class that excuted whenever an object of its class goes out of scope  
or delete expression is applied to a pointer to the object of that class 
it will take no parameter 
*/

#include<iostream>
using namespace std ; 

class Human{
	private : 
	int age;  
	string name ;
	
	public:
	Human(){
		cout<<"the construcot"<<endl; 
	}
	~Human(){
		cout<<"Destructor"<<endl; 
	}
};
void Func(void); 

int main(){
	Human amar ,  *hend  ; 
	hend = new Human;
	delete hend ; 
	
	cout<<"---------------------"<<endl;
	Func(); 
	cout<<"-----------------"<<endl; 
	 
}
void Func(void){
	Human mahmoud; 
	cout<<"my name is "<<endl; 
	cout<<"hello world"<<endl ;
}