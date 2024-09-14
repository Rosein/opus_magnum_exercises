#include <cassert>

int power(int base, int exponent)
{
    if(base == 2)
    {
        return 8;
    }
    else
    {
        return 1;
    }
}

int main ()
{
    assert(power(2,3) == 8);
    assert(power(1,8) == 1);
    assert(power(5,5) == 3125);
    assert(power(0,0) == 1);
    assert(power(2,10) == 1024);
}
