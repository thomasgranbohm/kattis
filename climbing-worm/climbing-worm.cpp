// Link to problem: https://open.kattis.com/problems/climbingworm
#include <iostream>

using namespace std;

int main()
{
    int a, b, h;
    cin >> a >> b >> h;
    int c = a - b, index = 0, d = 0;
    while (true)
    {
        d += a;
        ++index;
        if (d >= h)
            break;
            
        d -= b;
    }

    cout << index;

    return 0;
}