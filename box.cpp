#include<iostream>
using namespace std;
class box{

    private:
    int length;
    int breadth;
    int height;
    public:
    box(int a,int b, int c)
    {
        length=a;
        breadth=b;
        height=c;
    }
    void calvolume()
    {
        cout<<"volume is "<<length*breadth*height;
    }
};
int main()
{   
    int a,b,c;
    cout<<"enter length breadth and height of the box : ";
    cin>>a>>b>>c;
    box b1(a,b,c);
    b1.calvolume();
    return 0;

}
