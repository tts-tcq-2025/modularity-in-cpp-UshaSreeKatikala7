#include <iostream>
#include "ColorManual.h"
#include "ColorPair.h"
#include "ColorCode.h"

using namespace TelCoColorCoder;

void PrintColorCodeManual() {
    int pairNumber = 1;
    for (int i = 0; i < numberOfMajorColors; ++i) {
        for (int j = 0; j < numberOfMinorColors; ++j) {
            ColorPair cp((MajorColor)i, (MinorColor)j);
            std::cout << pairNumber << " | " << cp.ToString() << std::endl;
            ++pairNumber;
        }
    }
}
