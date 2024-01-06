#include<iostream>
using namespace std ; 

int main(){
    int a=10 , b=0, c ; 
    try{
      
        if(b ==0 ){
            throw "you divided on 0 "; 
        }
		  c= a/b; 
    }
    catch (char * ptr){
        cout<<ptr<<endl; 
    }
}