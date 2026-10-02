#include <cstdint>   // std::uint8_t
#include <vector>    // std::vector
#include <iostream>  // std::cout
#include <iomanip>   // std::hex, std::setw

int main() {
    const std::vector<std::uint8_t> bytes {
        0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x00
    };
    std::cout << std::hex
        << std::setw(8)
        << std::setfill('0')
        << 0
        << " ";
    for (std::size_t i = 0; i < bytes.size(); ++i) {
        std::cout << std::setw(2)
            << static_cast<int>(bytes[i])
            << " ";
    }

    std::cout << '\n';
    return 0;
}
