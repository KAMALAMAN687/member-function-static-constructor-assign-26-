#include<iostream>
using namespace std;
class time 
{
    private:
    int hour;
    int minute;
    int second;
    public:
    time (int x, int y, int z)
    {
        hour=x;
        minute=y;
        second=z;
    }
    void showtime()
    {
        cout<<"time is\n"<<hour<<" hour "<<minute<<" minute "<<second<<" second ";
    }
};
int main()
{
    time t1(2,6,40);
    t1.showtime();
    return 0;
}
