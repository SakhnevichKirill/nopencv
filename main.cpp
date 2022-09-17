//
// Created by kirsr on 16.09.2022.
//
#include <cstdio>
#include <cstdlib>
#include "TutorialConfig.h"
//#include "nopencv.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2)
    {
        fprintf(stdout,"%s Version %d.%d\n",
                argv[0],
                Tutorial_VERSION_MAJOR,
                Tutorial_VERSION_MINOR);
        fprintf(stdout,"Usage: %s number\n",argv[0]);
        return 1;
    }
    double inputValue = atof(argv[1]);

    fprintf(stdout, "Input value: %g\n", inputValue);


    return 0;
}