#include <iostream>

using namespace std;

int main()
{
    int N, lengthOfRoad;
    cin >> N >> lengthOfRoad;

    int timeElapsed = 0;

    int lastDistance = 0;

    for (int i = 0; i < N; i++)
    {
        int distanceCovered, redSeconds, greenSeconds;
        cin >> distanceCovered >> redSeconds >> greenSeconds;

        int fullCycle = redSeconds + greenSeconds;

        timeElapsed += distanceCovered - lastDistance;

        int modulo = timeElapsed % fullCycle;
        if (modulo <= redSeconds)
        {
            timeElapsed += redSeconds - modulo;
        }

        lastDistance = distanceCovered;
    }
    timeElapsed += lengthOfRoad - lastDistance;

    cout << timeElapsed << endl;

    return 0;
}