
/* 1- you can't initialize the static class member inside the calss definition 
   2- the purpose of initialize static member out side the class t=is to make it allocate memory 
   3-We can define class members static using static keyword. When we declare a member of a class as static it means no matter how many objects
   of the class are created*/
#include<iostream>

using namespace std ; 


class Human{
	
	private :
	 
	int length ;
	
	public:
	static int counter ;
	Human(){
		counter++ ;
	} 
	static void printAllPeople(void){
		cout<<"all people is "<<counter
	}
	
};
int Human:: counter = 0 ; 
void CountHuman(void); 

int main(){
	Human mahmoud ;
Human Amar ;
	
	//cout<<"size of class "<<sizeof(mahmoud); 
	CountHuman();
}
void CountHuman(void){
	cout<<"total human is "<<Human::counter<<endl; 
}