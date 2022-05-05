#define THRESHOLD 200
#define OK 200
#define NOTOK 500
int alertFailureCount = 0;

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    return celcius>THRESHOLD? NOTOK:OK;
}
