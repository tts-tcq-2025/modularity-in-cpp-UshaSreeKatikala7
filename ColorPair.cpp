#include "ColorPair.h"
#include "ColorCodeUtils.h"

using namespace TelCoColorCoder;

ColorPair::ColorPair(MajorColor major, MinorColor minor)
    : majorColor(major), minorColor(minor) {}

MajorColor ColorPair::getMajor() {
    return majorColor;
}

MinorColor ColorPair::getMinor() {
    return minorColor;
}

std::string ColorPair::ToString() {
    return MajorColorNames[majorColor] + std::string(" ") + MinorColorNames[minorColor];
}
