#include <cassert>

int power(int base, int exponent)
{
    int result = 1;

    for(int i = 0; i < exponent; ++i)
    {
        result = result * base;
    }

    return result;
}

int main ()
{
    assert(power(2,3) == 8);
    assert(power(1,8) == 1);
    assert(power(5,5) == 3125);
    assert(power(0,0) == 1);
    assert(power(2,10) == 1024);
}
