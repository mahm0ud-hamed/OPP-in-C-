#include<iostream>
using namespace std ; 

class Father{
	protected : 
	int lenght ; 
	public:
	Father(int x){
		lenght = x ; 
	}
	void AskYourFather(){
		cout<<"Iam your Father "<<endl; 
	}
};

class Mother{
	protected: 
	string SkinColor ;
	public:	
	Mother(string Color){
		SkinColor = Color ; 
	}
	void AskYourMother(){
		cout<<"Iam your Mother "<<endl; 
	}
};

class Child: public Father,public Mother{
	public: 
	Child(int len , string clor ): Father(len ),Mother(clor){
		
	}
		
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
	Child Mahmoud(188 , "white");
	Mahmoud.Display();
}