#include<iostream>

using namespace std ; 

class Human{
	private :
	string * name ; 
	int * age ; 
	public :
	Human(int iage , string iname ){
		name = new string ; 
		age = new int ; 
		*name = iname ; 
		*age = iage ; 
	}
	~Human(){
		cout<<"time to free memory"<<endl; 
		delete name ; 
		delete age; 
	}
	void Display(void);
	
};

void Human:: Display(){
	cout<<"My name is "<<*name <<endl <<"my age is "<<*age<<endl;  
}

int main(){
	Human Mahmoud(26 , "mahmoud hamed"); 
	Mahmoud.Display(); 
}