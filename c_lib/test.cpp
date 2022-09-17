// #pragma once
#include <iostream>
#include <fstream>
#include <filesystem>

#include <minunit.h>

#include "nopencv.hpp"


using namespace gerbolyze;
using namespace gerbolyze::nopencv;

char msg[512];

MU_TEST(test_complex_example_from_paper) {
    int32_t img_data[6*9] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 0, 0, 1, 0, 0, 1, 0,
        0, 1, 0, 0, 1, 0, 0, 1, 0,
        0, 1, 1, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0,
    };
    Image32 test_img(9, 6, static_cast<int*>(img_data));
}



MU_TEST_SUITE(nopencv_contours_suite) {
    MU_RUN_TEST(test_complex_example_from_paper);
};

int main()
{
    std::cout << "Hello World" << std::endl;

    // MU_RUN_SUITE(nopencv_contours_suite);
    // MU_REPORT();
    // return MU_EXIT_CODE;
}