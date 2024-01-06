/*the nature of virtual function is inherited */
/*if the derved class override function is not exisit compiler will excute 
the base class of this derived class
*/
#include<iostream>
using namespace std ; 

class Person{
	public:
	virtual void Dispaly(){
		cout<<"Iam Person"<<endl; 
	}
};

class Engineer : public Person{
	public : 
	void Dispaly(){
		cout<<"Iam Engineer"<<endl; 
	}
};

class SW_Engineer : public Engineer{
	public:
	void Dispaly(){
		cout<<"Iam Software Engineer"<<endl; 
	}
};
void WhoIS(Person * ptr ){
	ptr->Dispaly();
}

int main(){
	SW_Engineer mahmoud ; 
	mahmoud.Dispaly(); 
	WhoIS(&mahmoud); 
}