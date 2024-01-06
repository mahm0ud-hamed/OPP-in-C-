#include<iostream>
#include<stdexcept>
using namespace std ; 

int main(){
    int a = 10 , b =0 , c ; 
    try{
        if(b == 0 )
        throw runtime_error("hi Bro you make a big fault you are a guilty");
        c = a/b;
    }
    catch(runtime_error & ERROR){
        cout<<"you divided by zero"<<endl;
        cout<<ERROR.what();
    }
     
    
}