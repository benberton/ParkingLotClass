#include "Lot.h"

int main()
{
    Lot a(100);
    for (int i = 0; i < 100; ++i) {
        a.fillSpot(i);
    }
    a.printSpotsInUse();
    return 0;
}
