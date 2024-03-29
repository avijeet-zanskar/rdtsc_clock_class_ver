#include <iostream>

#include "rdtsc_clock.hpp"

int main() {
    RDTSC_Clock::init();
    while (true) {  
        auto now = std::chrono::system_clock::now();
        long long rdtscp_timestamp = RDTSC_Clock::now();
        long long system_timestamp = now.time_since_epoch().count();
        std::cout << "Delta: " << rdtscp_timestamp - system_timestamp << '\n';
    }
    RDTSC_Clock::exit();
}