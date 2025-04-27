#include <iostream>
#include <boost/format>

main() {
    char name[8] = "Quan";
    int val = 10;

    std::cout << boost::format("Hi %s, val=%d") % name % val << std::endl;
}
