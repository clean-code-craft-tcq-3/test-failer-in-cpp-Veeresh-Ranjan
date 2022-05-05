#include "misAlignedCode.h"
#include "misAlignedCheck.h"
#include "ColorCodePairCheck.h"

vector <string> getArrayOfStringLines(){
    stringstream stringstream_buffer;
    printColorMap(stringstream_buffer);
    vector <string> arrayOfStringLines;
    string line;
    do{
        getline(stringstream_buffer,line,'\n');
        arrayOfStringLines.push_back(line);
    }while(stringstream_buffer.str().find('\n') != string::npos && line != "");
    return arrayOfStringLines;
}

void testCode(){
    vector <string> arrayOfStringLines;
    arrayOfStringLines = getArrayOfStringLines();
    assert(getPairNumber(arrayOfStringLines.at(0))=="1");
    assert(getMajorColor(arrayOfStringLines.at(10))=="Black");
    assert(getMinorColor(arrayOfStringLines.at(10))=="Blue");
    assert(checkAlignment(arrayOfStringLines) == true);

}

int main() {
    int result = printColorMap(cout);
    assert(result == 25);
    testCode();
    cout << "All is well (maybe!)\n";
    return 0;
}

