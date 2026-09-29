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
        RollNo=9;
        Name="Anshuman";
   }
        public:

   void Display()
        {  cout<<RollNo<<" " <<Name<<endl; }
};

int main()
{
        Student S1,S2;
        S1.Display();
        S2.Display();
   return 0;
}
