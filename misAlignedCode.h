#include <iostream>
#include <assert.h>
#include <sstream>
#include <cstring>
#include <vector>

using namespace std;

int getColorPairNumber(int majorColorIndex, int minorColorIndex){
    int result = majorColorIndex * 5 + minorColorIndex;
    return result;
}
const char* getMajorColor(int majorColorIndex){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    return majorColor[majorColorIndex];
}
const char* getMinorColor(int minorColorIndex){
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    return minorColor[minorColorIndex];
}

int printColorMap(std::ostream& output) {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            //cout << getColorPairNumber(i,j) << " | " << getMajorColor(i) << " | " << getMinorColor(i) << "\n";
            output << getColorPairNumber(i,j) << " | " << getMajorColor(i) << " | " << getMinorColor(i) << "\n";
        }
    }
    return i * j;
}
