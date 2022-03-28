#include "Lot.h"

int main()
{
    Lot a(100);
    a.fillSpot(10);
    a.fillSpot(90);
    a.printSpotsInUse();
    return 0;
}
