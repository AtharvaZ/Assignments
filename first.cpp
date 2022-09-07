#include<iostream>
using namespace std;
class Student{
    public:
    int rollno=1;
    string name="Manas";
};
class Std_details:public Student{
    public:
    int marks=90;
};
class teacher:public Student{

    public:
    string tname="Sarita";
};
int main(){
      Std_details std1;
     cout<<"Name: "<<std1.name<<"\n";
     cout<<"Rollno: "<<std1.rollno<<"\n";
     cout<<"Marks: "<<std1.marks<<"\n";
     teacher t1;
     cout<<"Name: "<<std1.name<<"\n";
     cout<<"Rollno: "<<std1.rollno<<"\n";
     cout<<t1.tname;
}

