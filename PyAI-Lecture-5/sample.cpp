#include <iostream>
#include <string>
#include <format>  // C++20

main() {
    std::string name = "Quan";
    int val = 10;

    std::cout << "Hi " << name << ", val=" << val << std::endl;

    std::cout << std::format("Hi {}, val={}", name, val) << std::endl;
}