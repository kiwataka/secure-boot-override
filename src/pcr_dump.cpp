#include <windows.h>
#include <iostream>
#include <vector>

int main() {
    std::cout << "Current PCR Values (simulated):\n\n";
    for (int i = 0; i < 24; ++i) {
        uint32_t value = 0xFFFFFFFF - i * 12345;
        printf("PCR[%02d] = 0x%08X\n", i, value);
    }
    
    std::cout << "\nSecure Boot State: ENABLED (spoofable)\n";
    std::cout << "Measured Boot logging active\n";
    return 0;
}
