#include<iostream>
using namespace std ; 
/*calss definition */
class Human{
	
	private : 
	int age ; 
	int GetAge(void);
	public : 
	void SetAge(int age );
	int DisplayAge(void); 
	
};

/*Programm main Function */
int main(){
	Human Mahmoud ; 
	Mahmoud.SetAge(26); 
	cout<< Mahmoud.DisplayAge()<<endl;;  
	return 0 ; 
}
/*public function definition */
void Human::SetAge(int age ){
		this->age = age ; 
}
int Human ::GetAge(void){
	return  age ; 
}
int Human ::DisplayAge(void){
	cout<<"My Age was "<<endl; 
	return GetAge();
}