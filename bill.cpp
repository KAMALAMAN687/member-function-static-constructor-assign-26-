#include<iostream>
using namespace std;
class bill
{
    private:
    char a[20];
    int b;
    char c[20];
    int x; 
    public:
    void get()
    {
        
        cout<<"enter name of customer: \n";
        cin.getline(a,20);
        cin.ignore();
        cout<<"enter phone number : \n";
        cin>>b;
        
        cout<<"enter city name: \n";
        cin.getline(c,20);

    }
    void calculatebill()
    {
        cout<<"enter unit of electricity:";
        cin>>x;
        if(x<=100)
        cout<<"your generated bill is "<<x*1.20;
        else
        {
            if(x<=200)
            cout<<"your generated bill is "<<x*2;
            else
             cout<<"your generated bill is "<<x*3;
        }

    }
    
};
int main()
{
    bill b1;
    b1.get();
    b1.calculatebill();
    return 0;


}