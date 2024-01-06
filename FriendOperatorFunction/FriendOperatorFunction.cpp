/*+= and -= operators the operator function will not returna any thing 
becouse x+=10 -> x=x+10 the new value will stored in the object itself*/ 
#include<iostream>
#include<string>
using namespace std ; 

class mark {
    public : 
    int mark1 ; 
    /*constructor*/
    mark(int mark){
        mark1 = mark ; 
    }
    void Display(){
        cout<<"your mark is"<<mark1<<endl; 
    }
    void operator+=(int value){
        mark1+=value ; 
    }
    friend void operator-=(mark &obj,int value);
};
void operator-=(mark &obj,int value){
    obj.mark1-=value ; 
}
int main(){
    mark mahmoud(10); 
    mahmoud.Display(); 
    mahmoud+=10; 
    mahmoud.Display();
    mahmoud-=5 ; 
    mahmoud.Display();
    return 0 ; 
}
