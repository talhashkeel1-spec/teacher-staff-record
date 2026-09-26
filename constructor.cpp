#include <iostream>
#include <string>
using namespace std;
class student {
public:
    string staff;
    int students;
    string salary;
student(string staff,int students,string salary){
        this->staff=staff;
        this->students=students;
        this->salary=salary;
    } 
   
    void printt(){
        cout<<"Name ="<<staff<<endl;
        cout<<"No of Student= "<<students<<endl;
        cout<<"salary = "<<salary<<endl; 
    }
};
int main(){
    
    student o1("noman ",98,"100");
    o1.printt();
}