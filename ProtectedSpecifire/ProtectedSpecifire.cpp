/* 
the protected variable in side the class is accessable inside 
the class and the subclass (which iherite from this class )
*/

#include<iostream>
using namespace std ; 

class person{
	protected: 
	string name ; 
	public: 
	void SetName(string name ){
		this-> name = name ; 
	}
};
class Student : public person{
	public: 
	void DisplayName(void){
		cout<<"student name is"<<name<<endl; 
	}
};

int main(){
	Student mahmoud ; 
	mahmoud.SetName(" Mahmoud Hamed");
	mahmoud.DisplayName(); 
	return 0 ; 
}