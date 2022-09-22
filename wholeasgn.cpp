#include <iostream>
using namespace std;
class subject{
        public:
        string math;
        string chem;
        string phy;

        subject(string m,string c,string p){
            m=math;
            c=chem;
            phy=p;
        }
    };
class student:public subject{
        public:
        string name;
        int rollno;
        int marks;

        student(string n,int r,int m){
            n=name;
            r=rollno;
            m=marks;
        }
    };

class teacher:public student{
    public:
    string name;
};

int main(){
    int c,r;
    char q[10]="y";
    student s1,s2,s3;
    s1.subject(95,89,87);
    s1.student("Aman",1,271);

    s2.subject(94,90,82);
    s2.student("Akash",2,266);

    s3.subject(90,98,91);
    s3.student("Binod",3,279);


    teacher t1,t2,t3;
    t1.name="Vineeta";
    t2.name="Vinod";
    t3.name="Alpesh";

    do{
    cout<<"1.Individual subject marks."<<"\n";
    cout<<"2.Total Marks."<<"\n";
    cout<<"Enter your choice: ";
    cin>>c>>"\n";
    switch(c)
    {
        case 1:
        cout<<"Enter rollno: ";
        cin>>r;
        if(r==1){
        cout<<"Maths teacher name:"<<t1.name<<"\n";
        cout<<"Student name: "<<s1.name<<"\n";
        cout<<"Maths:"<<s1.math<<"\n";
        cout<<"Chemistry teacher name:"<<t2.name<<"\n";
        cout<<"Student name: "<<s2.name<<"\n";
        cout<<"Chem:"<<s1.chem<<"\n";
        cout<<"Physics teacher name:"<<t3.name<<"\n";
        cout<<"Student name: "<<s3.name<<"\n";
        cout<<"Phy:"<<s1.phy<<"\n";
        }
        else if(r==2){
        cout<<"Maths teacher name:"<<t1.name<<"\n";
        cout<<"Maths:"<<s2.math<<"\n";
        cout<<"Chemistry teacher name:"<<t2.name<<"\n";
        cout<<"Chem:"<<s2.chem<<"\n";
        cout<<"Physics teacher name:"<<t3.name<<"\n";
        cout<<"Phy:"<<s2.phy<<"\n";
        }
        else if(r==3){
        cout<<"Maths teacher name:"<<t1.name<<"\n";
        cout<<"Maths:"<<s3.math<<"\n";
        cout<<"Chemistry teacher name:"<<t2.name<<"\n";
        cout<<"Chem:"<<s3.chem<<"\n";
        cout<<"Physics teacher name:"<<t3.name<<"\n";
        cout<<"Phy:"<<s3.phy<<"\n";
        }
        else{
            cout<<"Give appropriate rollno.";
        }
        break;

        case 2:
        cout<<"Enter rollno: ";
        cin>>r>>"\n";
        if(r==1){
        cout<<"Rollno:"<<s1.rollno<<"\n";
        cout<<"Name:"<<s1.name<<"\n";
        cout<<"Total Marks:"<<s1.marks<<"\n";
        }
        else if(r==2){
        cout<<"Rollno:"<<s2.rollno<<"\n";
        cout<<"Name:"<<s2.name<<"\n";
        cout<<"Total Marks:"<<s2.marks<<"\n";
        }
        else if(r==3){
        cout<<"Rollno:"<<s3.rollno<<"\n";
        cout<<"Name:"<<s3.name<<"\n";
        cout<<"Total Marks:"<<s3.marks<<"\n";
        }
        else{
            cout<<"Give appropriate rollno.";
        }
        break;
   }
   cout<<"Do you want to continue?y/n:";
   cin>>q;
  }while(q!="y");
}