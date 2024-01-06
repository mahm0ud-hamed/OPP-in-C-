/*override base calss methods is to make another function in derived calss with the same signature 
(name , retuen type , parameter number and data types)
*/
#include<iostream>
using namespace std ; 

class Person {
	public : 
	void Dispaly(){
		cout<<"Hello iam a person"<<endl; 
	}
};

class student : public Person {
	public : 
	void Dispaly(){
		cout<<"Hello iam a student"<<endl; 
	}
};
int main(){
	student Mahmoud;
	
	Mahmoud.Dispaly(); 
}