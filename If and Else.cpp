#include<iostream>
#include<string>

using namespace std;

int main()
   {
        int phy,chem,math;
        float percentage;
        cout<<"What is ur marks of phy : ";
        cin>>phy;

        cout<<"What is ur marks of chem : ";
        cin>>chem;

        cout<<"What is ur marks of math : ";
        cin>>math;

        if(phy>45)
        { 
          if(chem>45)
           {
                if(math>45) 
                        {cout<<"U can take the admission"<<endl;}
           } 

        if(phy<45)
        {cout<<"Ur Phy marks are less"<<endl;}

        if(chem<45)
        {cout<<"Ur Chem marks are less"<<endl;}

        if(math<45)
        {cout<<"Ur Math marks are less"<<endl;}


        else
        {cout<<endl<<"U cannot take admission"<<endl;}

         return 0;
        }





           
