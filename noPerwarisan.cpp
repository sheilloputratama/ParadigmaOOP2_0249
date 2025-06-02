#include <iostream>
using namespace std;

class baseClass final
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};

class deviredClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya Function dari devired Class";
    }
};

int main()
{
    deviredClass a;
    a.perkenalan();

    return 0;
}