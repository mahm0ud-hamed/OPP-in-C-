#include<iostream>
#include<stdexcept>
using namespace std ; 

int main(){
    try{
        throw 4; 
        
    }catch(const char *err){
        cout<<err<<endl; 
    }
    catch(int error){
        cout<<error<<endl; 
    }
}