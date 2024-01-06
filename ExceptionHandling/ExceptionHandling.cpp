/*response to an exceptional circumistance that arise when the program run */
#include<iostream>
#include<exception>
using namespace std ; 

int main(){
    int x = 10 , b =0 , c ; 
    while (1)
    {
    try{
        /*we use try block to put the code we think that might produce an exception */
        if(b == 0){
            /*we use throw to throw the exception */
            throw "divid bu zero erro ";
        }
        /*if the exception occur this block of code will not be excuted */
        c = x / b; 
        cout<<c<<endl;
    }
    catch(const char * Statment){
        /*we use catch to handle the exception */
        cout<<"exception occur"<<endl<<Statment<<endl;
        b =1 ; 
    }
      
    }
    
    
}