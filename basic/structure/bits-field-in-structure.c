#include <stdio.h>

// Define a structure with bit fields
struct DeviceStatus {
    unsigned int powerOn : 1;     // 1 bit for power status (0 or 1)
    unsigned int error : 1;        // 1 bit for error status (0 or 1)
    unsigned int mode : 2;         // 2 bits for mode (00 to 11)
    unsigned int temperature : 4;   // 4 bits for temperature (0 to 15)
};

int main() {
    struct DeviceStatus device; // Declare a DeviceStatus structure

    // Initialize the device status
    device.powerOn = 1;        // Device is powered on
    device.error = 0;          // No error
    device.mode = 2;           // Mode 2
    device.temperature = 10;    // Temperature value 10

    // Display the device status
    printf("Device Status:\n");
    printf("Power On: %u\n", device.powerOn);
    printf("Error: %u\n", device.error);
    printf("Mode: %u\n", device.mode);
    printf("Temperature: %u\n", device.temperature);

    // Display the size of the structure
    printf("Size of DeviceStatus structure: %zu bytes\n", sizeof(device));

    return 0;
}
