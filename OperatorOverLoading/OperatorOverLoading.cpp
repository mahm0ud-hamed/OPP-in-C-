/*is to make basic operators in c++ to work with our custom 
calsses */
#include<iostream>
#include<string>
using namespace std ; 
/* return type  class name :: funnction name ()*/
class marks{
   int mark1 ; 
   int mark2 ; 
   public:
   marks(){
    mark1= 0 ;
    mark2 = 0 ; 
   }
    marks(int mark1 , int mark2 ){
    this->mark1=mark1  ;
    this->mark2= mark2 ; 
   }
   void Dispaly(){
    cout<<"mark1 = "<<mark1<<"mark2= "<<mark2<<endl; 
   }
   marks operator+ (marks Obj){
    marks temp ; 
    temp.mark1=Obj.mark1+mark1; 
    temp.mark2=Obj.mark2+mark2;
    Dispaly();
    return temp ;  
   }
   marks operator-(marks Obj); 
};

marks marks:: operator-(marks Obj){
    marks temp ; 
    temp.mark1= mark1-Obj.mark1; 
    temp.mark2 = mark2 - Obj.mark2; 
    return temp ; 
}
int main(){
    marks obj1(5,6) , obj2(1,2) , obj3;
    obj3= obj1+obj2 ; 
    obj3.Dispaly(); 
    obj3 = obj1-obj2 ; 
    obj3.Dispaly();  
}