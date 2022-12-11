#include<iostream>
using namespace std;
class counter
{
    private :
    int x;
    public :
    counter()
    {
        x++;
    }
    void show()
    {
        cout<<x;
    }
};
int main()
{
    counter c1;
    c1.show();
    return 0;
}