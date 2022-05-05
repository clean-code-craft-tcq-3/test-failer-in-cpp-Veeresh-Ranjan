#include <iostream>
#include "alerterNetworkStub.h"
#include "alerterNetwork.h"

enum CodeEnvironment{
    Test,
    Integration
};

int (*alerterPointer)(float) = &networkAlert;
//Initialising function pointer to real network interface

void setEnvironment(CodeEnvironment env){
    if (env == Test) alerterPointer = &networkAlertStub;
    else alerterPointer = &networkAlert;
}
void alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = alerterPointer(celcius);
    if (returnCode != OK) {
        // non-ok response is not an error! Issues happen in life! let us keep a count of failures to report
        // However, this code doesn't count failures! Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 1;
        }
}
