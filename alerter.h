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

float getFarenheitToCelcius(float farenheit){
    return ((farenheit - 32) * 5 / 9);
}

void alertInCelcius(float farenheit) {
    float celcius = getFarenheitToCelcius(farenheit);
    int returnCode = alerterPointer(celcius);
    if (returnCode != OK) {
        alertFailureCount += 1;
        }
}
