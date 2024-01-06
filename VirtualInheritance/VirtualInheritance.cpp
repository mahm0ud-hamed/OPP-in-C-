
/*
Virtual Function:

A virtual function is a function in a base class that is marked with the virtual keyword.
It is meant to be overridden by derived classes.
The purpose is to allow the correct function to be called for an object
, even if the object's type is determined at runtime.*/

/*the virtual nature is inherited and also if the derived calss 
didn't override the base class funtion the hiluricy will be followed */
#include<iostream> 

using namespace std ; 

class person{
	public : 
	virtual void Introduce(){
		cout<<"hello from person"<<endl ; 
	}
};

class student : public person{
	public : 
	void Introduce(){
		cout<<"hello from student"<<endl ; 
	}
};

class Gstudent : public student {
	public : 
	void Introduce(){
		cout<<"hello from graduated student "<<endl ; 
	}
};

void WhoIam(person* PER ){
	PER->Introduce(); 
}

int main(){
	Gstudent mahmoud ; 
	WhoIam(&mahmoud) ; 
	return 0 ; 
}