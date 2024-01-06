/*overload the unary operator un postfix form */
#include<iostream>
#include<string>
using namespace std ; 

class mark{
    public: 
    int Mark; 
    mark(){
        Mark =0 ; 
    }
    mark(int Mark){
        this->Mark= Mark ; 
    }
    void operator++(int){
        Mark++ ; 
    }
    void Display(void){
        cout<<"your mark is "<<Mark<<endl; 
    }
    friend void operator--(mark &Obj ,int);
};
void operator--(mark &Obj ,int){
    Obj.Mark-- ; 
}

int main(){
    mark mahmoud(10) ; 
    cout<<"your mark in postfix increment is  "<<mahmoud.Mark++<<endl;
    mahmoud.Display();
    cout<<"your mark in postfix Decrement is "<<mahmoud.Mark--<<endl; 
    mahmoud.Display();
}


