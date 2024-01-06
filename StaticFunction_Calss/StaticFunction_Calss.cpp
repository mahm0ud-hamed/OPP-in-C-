/*static function in class*/

/*1-static function access all static members it can't use the unstatic members 
  2-static function can called only using scope perator
  3-static function can called even if no object created from class
*/
#include<iostream>

using namespace std ; 

void PrintMyName(void){
	cout<<"Mahmoud Mohamed hamed"<<endl;
}
class Human{
	
	private :
	 
	int length ;
	
	public:
	static int counter ;
	Human(){
		counter++ ;
	} 
	static void PrintAllPeople(void){
		cout<<"all people is "<<counter<<endl;
		PrintMyName();
	}
};
int Human:: counter = 0 ; 
void CountHuman(void); 

int main(){
	Human::PrintAllPeople();
	//cout<<"size of class "<<sizeof(mahmoud); 
	CountHuman();
	
}
void CountHuman(void){
	cout<<"total human is "<<Human::counter<<endl; 
}