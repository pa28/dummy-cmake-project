#include <iostream>
#include "configuration.h"

using namespace version;

int main() {
    std::cout << "Hello, World! "
              << major << '.'
              << minor << '.'
              << patch << '.'
              << tweak
              << std::endl;
    return 0;
}