#include<iostream>
#include<string>

using namespace std;

class Student 
{
        public:
        int RollNo;
        string Name;

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
        Student S1(9,"Anshman"),S2(11,"Atharav");
        S1.Display();
        S2.Display();
   return 0;
}

