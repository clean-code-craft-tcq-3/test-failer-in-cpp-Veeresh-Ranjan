#include <assert.h>
#include "alerter.h"

void test_alerter(){
    setEnvironment(Test);
    alertInCelcius(303.6);
    assert(alertFailureCount == 0);
    alertInCelcius(400.5);
    assert(alertFailureCount == 1);
    alertInCelcius(900.5);
    assert(alertFailureCount == 2);
    alertInCelcius(105.5);
    assert(alertFailureCount == 2);
}

int main() {
    test_alerter();
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
