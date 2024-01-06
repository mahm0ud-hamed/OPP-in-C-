#include<iostream>
using namespace std ; 

class Person{
	public : 
	void Display(void){
		cout<<"Hello Iam person"<<endl; 
	}
};

class Student : public Person {
	public:
	void Display(void){
		cout<<"Hello Iam a Student"<<endl; 
	}
};

void IsMe(Person x){
	 x.Display(); 
}
int main(){
	Student mahmoud ; 
	mahmoud.Display();
	IsMe(mahmoud);
	return 0 ; 
}