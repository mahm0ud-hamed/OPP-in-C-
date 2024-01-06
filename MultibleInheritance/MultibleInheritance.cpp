/**/
#include<iostream>
using namespace std ; 

class Father{
	public : 
	int lenght ; 
	void AskYourFather(){
		cout<<"Iam your Father "<<endl; 
	}
};

class Mother{
	public : 
	string SkinColor ; 
	void AskYourMother(){
		cout<<"Iam your Mother "<<endl; 
	}
};

class Child: public Father,public Mother{
	public: 
	void AskParents(){
		cout<<"Iam the child "<<endl; 
	}
	void SetProperites(string SkinColor , int lenght){
		this->SkinColor = SkinColor ; 
		this->lenght = lenght ;
	}
	void Display(){
		cout<<"my lenghth was "<<lenght <<endl; 
		cout<<"my SkinColor was "<<SkinColor <<endl;
	}
};

int main(){
	Child Mahmoud ; 
	Mahmoud.SetProperites("white" , 178); 
	Mahmoud.Display();
	Mahmoud.AskYourFather();
	Mahmoud.AskYourMother();
}