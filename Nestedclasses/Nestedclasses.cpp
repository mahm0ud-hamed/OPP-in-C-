/*the netsted calss cna only accessed throuth the outer calss 
  */
#include<iostream>
#include<string>
using namespace std ; 

class person{
    public : 
    string name ; 
    class address{
        public:
        string country ; 
        string STname ; 
        int HNUM ; 
    };
    address ADD ;
    void Display(void ){
        cout<<"Person name "<<name <<endl; 
        cout<<"Person country "<<ADD.country<<endl;
        cout<<"Person Street name "<<ADD.STname<<endl;
        cout<<"Person house name "<<ADD.HNUM<<endl;

    }
};

int main(){
    person mahmoud ; 
    mahmoud.name = "mahmoud";  
    mahmoud.ADD.country= "egypt" ;
    mahmoud.ADD.STname = "monofia"; 
    mahmoud.ADD.HNUM = 268 ; 
    mahmoud.Display();
   // cout<<"the size of calss "<<sizeof(mahmoud); 
    return 0 ; 
}