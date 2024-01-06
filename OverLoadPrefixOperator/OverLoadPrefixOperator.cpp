/*overload the unary operators in prefix from */
#include<iostream>
#include<string>
using namespace std ; 

class mark{
    public: 
    int Mark ; 
    mark(){
        Mark= 0 ; 
    }
    mark(int Mark){
        this->Mark=Mark ; 
    }
    void Display(){
        cout<<"your mark is "<<Mark<<endl; 
    }
    void operator++(void){
        ++Mark ;
    }
    friend void operator--(mark &Obj); 
};
void operator--(mark &Obj){
    --Obj.Mark;
}
int main(){
    mark mahmoud(10); 
    ++mahmoud; 
    mahmoud.Display(); 
    --mahmoud; 
    mahmoud.Display();

}