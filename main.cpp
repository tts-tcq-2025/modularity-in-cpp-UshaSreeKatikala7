#include "Tests.h"
#include "ColorManual.h"
#include "ColorPair.h"

using namespace TelCoColorCoder;

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    PrintColorCodeManual();

    return 0;
}
