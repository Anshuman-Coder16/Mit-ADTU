#include<iostream>
#include<string>

using namespace std;

class Student 
   {
        public:
        int RollNo;
        string Name;

    Student()
   {
        RollNo=0;
        Name="Blank";
    }

    Student(int RollNo, string Name)
   {
        this->RollNo=RollNo;
        this->Name=Name;
    }

void Display()
   {
        cout<<RollNo<<" " <<Name<<endl;
    }

~Student()
  {
        cout<<"Destructor Called."<<endl;
    }
};

int main()
   {
        Student S1(9,"Anshuman"),S2(S1),S3;
        S1.Display();
        S2.Display();
        S3.Display();
    return 0;
   }

