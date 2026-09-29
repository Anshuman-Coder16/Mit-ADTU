include<iostream>
#include<string>

using namespace std;

class Student 
{
        public:
        int RollNo;
        string Name;

        Student()
   {
        RollNo=16;
        Name="Ritesh";
   }

        Student(int R,string N)
   {
        RollNo=R;
        Name=N;
   }
        public:

   void Display()
        {  cout<<RollNo<<" " <<Name<<endl; }
};

int main()
{
        Student S1(9,"Anshman"),S2(S1),S3;
        S1.Display();
        S2.Display();
        S3.Display();
   return 0;
}


