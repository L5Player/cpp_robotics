#include <iostream>
#include "Gun.h"
#include "Soldier.h"

using namespace std;

void test()
{
    Soldier sanduo("XuSanduo");
    sanduo.addBulletToGun(20);
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(2);
    for (int i = 0; i < 3; i++)
    {
        sanduo.fire();
    }
}

int main()
{
    cout << "This is a test string..." << endl;
    test();
    return 0;
}
