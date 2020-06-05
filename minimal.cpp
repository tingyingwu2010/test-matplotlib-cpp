#include <vector>

#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
    std::string check = "hello!";
    int str_size = sizeof(std::string);
    int check_size = sizeof(check);
    std::cout << str_size << std::endl;
    std::cout << check_size << std::endl;

    std::cout << 0x1.001391762278p-2, -0x1.8951f245bb4f1p-9, 0x1.00093dc6b03c1p-3;


    std::vector<double> y = {1, 3, 2, 4};
    plt::plot(y);
    plt::save("minimal.pdf");
}
