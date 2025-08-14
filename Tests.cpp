#include <iostream>
#include <assert.h>
#include "Tests.h"
#include "ColorPair.h"
#include "ColorCodes.h"

using namespace TelCoColorCoder;

ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPair = pairNumber - 1;
    MajorColor major = (MajorColor)(zeroBasedPair / numberOfMinorColors);
    MinorColor minor = (MinorColor)(zeroBasedPair % numberOfMinorColors);
    return ColorPair(major, minor);
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
