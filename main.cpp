// Search & Replace V1
// Guillen, Moises
// Thu Nov 6 8:00PM
// strings , getline(), size_t , .find() , npos , .replace(), .length()
#include <iostream>
#include <string>
int main() {

    std::cout << "Enter a source string: ";
    std::string source{};
    std::getline(std::cin, source);

    std::cout << "Enter a pattern string: ";
    std::string pattern{};
    std::getline(std::cin, pattern);

    std::cout << "Enter a replacement string: ";
    std::string replacement{};
    std::getline(std::cin, replacement);

    size_t positionString{source.find(pattern)};
    if (positionString != std::string::npos) {
        source.replace(positionString,pattern.length(),replacement);
    }

    std::cout << "\nAfter replacement: " << source << '\n';

    return 0;
}