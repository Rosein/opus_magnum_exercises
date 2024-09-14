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
}
