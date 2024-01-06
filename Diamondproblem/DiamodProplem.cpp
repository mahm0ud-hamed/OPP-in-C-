/* diamond problem is arise
 when thre is inheritance hirulicky containing two or more 
 base classes that inherite from one base class 

*/
/*virtual inheritancewe are going to specify to the compliler 
there will be only one object of this base class 
' 
 */

#include<iostream>
using namespace std ;
class animal {
	public : 
	int age ; 
	virtual void Walk(){
		cout<<"animal walks" <<endl; 
		
	}
};
class tiger : virtual public animal {
	public: 
	void Walk(){
	cout<<"animal walks" <<endl; 
		
	}	
}; 
class lion : virtual public animal {
	
};

class Ligar : public tiger , public lion{
	
};
 
int main(){
	Ligar mahmoud ; 
	mahmoud.Walk();
	
	return 0 ; 
}


