#include <iostream>
#include <ctime> // Or #include <time>

int main() {
    // Get current time
    time_t now = time(0);

    // Convert to string representation (local time)
    char* dt = ctime(&now);
    std::cout << "Local date and time: " << dt << std::endl;

    // Convert to struct tm for UTC time
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    std::cout << "UTC date and time: " << dt << std::endl;

    return 0;
}