#include<iostream>
using namespace std;
class cube
{
    private:
    int a;
    public:
    cube(int x)//constructor
    {
        a=x;
    }
    cube()
    {

    }
    void volume()
    {
        cout<<"volume of cube is "<<a*a*a;
    }
    cube(cube &c)//copy constructor
    {
        a=c.a;

    }


} ;
int main()
{
    cube c1(2);
    cube c2=c1;
    c1.volume();
    c2.volume();
    return 0;

}