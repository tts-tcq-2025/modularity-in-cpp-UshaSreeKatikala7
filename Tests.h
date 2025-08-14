#ifndef TESTS_H
#define TESTS_H

namespace TelCoColorCoder {
    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);
}

#endif
