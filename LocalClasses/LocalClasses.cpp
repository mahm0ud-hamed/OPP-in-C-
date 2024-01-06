/*the local class has only function resolution */
#include<iostream>
#include<string>
using namespace std ; 

void StudentList(void);

int main(){
    
    StudentList();
    return  0 ; 
}

void StudentList(){
    class Student{
        public:
        string name  ; 
        int age ;
        void Display(){
            cout<<"Student name "<<name<<endl;
            cout<<"Student age "<< age <<endl ; 
        }
    };
    Student mahmoud ; 
    mahmoud.age = 26 ; 
    mahmoud.name="mahmoud mohamed hamed";
    mahmoud.Display();

}