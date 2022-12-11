#include<iostream>
using namespace std;
class staticcount
{
    private:
    static int x;
    public:
    static void increment()
    {
        x++;

    }
    void show()
    {
        cout<<x;
    }
};
int staticcount:: x;
int main()
{
    staticcount s1;
    s1.increment();
    s1.increment();
    s1.increment();
    s1.show();
    return 0;

}