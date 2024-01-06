/*when we cant define the virtual function in the base class 
and wee need to ensure that all derived classes must override 
the particular function 
*/

/*abstract classes is a class contain one or more pure virtual function 
so we cant creat any object from this class */
#include<iostream>
using namespace std ; 

class Person{
	public : 
	virtual void Introduce()=0;
};
class Student : public Person{
	public : 
	void Introduce(){
		cout<<"hello mahmoud hamed "<<endl; 
	}
};

int main(){
	Student mahmoud ; 
	//abstract call -> Person Amar 
	mahmoud.Introduce();
	return 0 ;
}