/*what is the meanning of the polymorphism */
/*------ 
polymorphims when there related classe by inheritance a call of a member function 
will cause a different function to be excuted depending on the type pf object that invoked the function 
*/
/*--------- solution is Virtual KeyWord -------*/ 
/* when you write virtual key word in base class funtion you send signal to the compiler 
that dot call the funtion of the base classs when this function is overriden by derived calss */ 
#include<iostream>
using namespace std ; 

class Person{
	public : 
	virtual void Display(void){
		cout<<"Hello Iam person"<<endl; 
	}
};

class Student : public Person {
	public:
	void Display(void){
		cout<<"Hello Iam a Student"<<endl; 
	}
};

class Engineer : public Person{
	public:
	void Display(void){
		cout<<"Hello iam Engineer"<<endl; 
	}
};
void IsMe(Person *x){
	 x->Display();
}
int main(){
	Student mahmoud ; 
	Engineer Amar ; 
	
	IsMe(&mahmoud);
	IsMe(&Amar);
	return 0 ; 
}