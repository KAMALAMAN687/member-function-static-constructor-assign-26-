#include<iostream>
using namespace std;
class complex 
{
    private:
    int a, b;
    public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;

    }
    void showdata()
    {
        cout<<"real="<<a<<"imaginary="<<b;

    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }

};
