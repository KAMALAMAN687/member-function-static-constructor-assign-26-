#include<iostream>
using namespace std;
class time
{
    private:
    int h,m,s;
    public:
    void settime(int a,int b, int c)
    {
        h=a;
        m=b;
        s=c;
    }
    void normalize()
    {
        while(s>60)
        {
            m++;
            s-=60;
        }
        while(m>60)
        {
            h++;
            m-=60;
        }

    }
    void showtime()
    {
        cout<<h<<"hour"<<m<<"minute"<<s<<"seconds";
    }
    time add(time t)
    {
        time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        temp.normalize();
        return temp;

    }

};
int main()
{
    time t1,t2,t3;
    t1.settime(12,80,70);
    t2.settime(6,80,90);
    t3=t1.add(t2);
    t3.normalize();
    t3.showtime();
    return 0;
}
