int networkAlert(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Assuming return code as Success, because the real network interface is unavailable
    return OK;
}
