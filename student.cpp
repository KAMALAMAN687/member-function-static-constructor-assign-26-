#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private :
    int a,c;
    char b[10];
    public:
    student(){
     cout<<"enter name of a student\n";
      cin.ignore();
        cin.getline(b,10);
        cout<<"enter roll number of a student\n";
        cin.ignore();
        cin>>a;    
    }
   
};
int main()
{
    student s1,s2;

   
    return 0;

}
