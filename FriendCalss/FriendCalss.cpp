/*friend class
all function in the feriend calss is friend funtion to the base class 
 */


#include<iostream>
using namespace std ; 

class Human{
	private :
	string name ; 
	int age ; 
	
	public : 
	Human(){
		name="mahmoud hamed " ; 
		age = 26 ; 
	}
	void Human_Display(void){
		cout<<"Human Name is : "<<name<<endl; 
		cout<<"Human Age is : "<<age<<endl; 
	}

	friend class MAN ;
};
class MAN {
	public :
	void Display_MAN(Human Iman){
		cout<<"the man name is: "<<Iman.name<<endl; 
		cout<<"the man Age is: "<<Iman.age<<endl; 
	}
};
int main(){
	Human Mahmoud ; 
	MAN Amar ;
	Mahmoud.Human_Display(); 
	Amar.Display_MAN(Mahmoud);
}