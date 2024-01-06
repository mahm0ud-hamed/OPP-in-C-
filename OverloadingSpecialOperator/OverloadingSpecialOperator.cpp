/* "() [] ->" to overload this special operator there is some restriction 
   1- it must be non static memberfunction 
   2- it can't be friend function 
   */
/* array  subscripting operator [] */
/* function call operator () */
/* arrow operator -> */
#include<iostream>
using namespace std ; 

class mark{
    private:
    int subject[3]; 
    int Mark; 
    public:
    mark(){
        Mark =0 ; 
    }
    void Dispaly(){
        cout<<"your mark was "<<Mark<<endl; 
    }
    mark(int sub1 , int sub2 , int sub3 ){
        subject[0]= sub1 ;
        subject[1]= sub2 ;
        subject[2]= sub3 ;
    }
    int operator[](int POS){
        return subject[POS]; 
    }
    mark operator()(int value){
        Mark = value; 
        return *this;
    }
    mark* operator->(){
        return this ;
    }
}; 
class ENGmark:public mark{
    int marr[3];
    public:
    ENGmark(){
        marr[0]=0;
        marr[1]=0;
        marr[2]=0;
    }
};

int main(){
    /*the constructor called when creating object */
    mark mahmoud(10,20,30); 
    cout<<"the value of the index is "<<mahmoud[0]<<endl; 
    cout<<"the value of the index is "<<mahmoud[1]<<endl; 
    cout<<"the value of the index is "<<mahmoud[2]<<endl; 
    /*function call overloaded operator is called when use object */
    mahmoud(30).Dispaly(); 
    mahmoud->Dispaly();

    ENGmark ali; 
    cout<<"inherited object"<<ali[0]<<endl; 
}  