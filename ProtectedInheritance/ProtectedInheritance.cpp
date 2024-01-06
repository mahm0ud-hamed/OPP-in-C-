/*peotected inheritance 
 all protected and public members 
 are treated as protected in derived calss 
 */
 #include<iostream>
 using namespace std ; 
 
 class Person{
	protected : 
	string name  ;
	int age ; 	
	public :  
	void SetName(string name){
		this->name = name ; 
	}
	void SetAge(int age){
		this->age = age ;
	}
 } ; 
 class Student : protected Person{
	 
	
	public:
	void SetData(int age , string Name){
		/*the public function in base class cinveted to protected 
		 so it can access only inside the base class and derived class */
		SetAge(age);
		SetName(Name); 
	}
	void DisplayData(){
		cout<<"my name is "<<name<<endl; 
		cout<<"my age is "<<age<<endl;
	}
 };
 
 int main(){
	 Student mahmoud ; 
	 mahmoud.SetData(26 , "mahmoud");
	 mahmoud.DisplayData();
	
 }