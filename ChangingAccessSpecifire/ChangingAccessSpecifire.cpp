/*private Inheritance 
the all members(private or public) of the base class are treated as privte members at the derived class
*/
#include<iostream>
using namespace std ;

class Person{
	protected :
	int length ; 
	public:
	int age ; 
	string name ; 
	void SetName(string name){
		this-> name = name ; 
	}
} ; 

class Student : private Person{
	public : 
	Person::length ; 
	void SetAgeName(int age , string name ){
		this -> age = age ; 
		SetName(name);
	}
	void DisplayData(){
	cout<<"my Age is "<<age<<endl;
	cout<<"my name is "<<name<<endl;
	}
};
int main(){
	Student mahmoud ; 
	mahmoud.length = 15 ;
	mahmoud.SetAgeName(26,"mahmoud");
	mahmoud.DisplayData();
}