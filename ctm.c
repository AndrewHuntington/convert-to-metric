#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "convert_to_metric.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s <number> -ftoc\n", argv[0]);
        return 1;
    }

    const char *option = argv[2];

    if (strcmp(option, "--ftoc") == 0)
    {
        float c = ftoc(strtof(argv[1], NULL));
        printf("%0.2f celsius\n", c);
    }
    else if (strcmp(option, "--lbtokg") == 0)
    {
        float kg = lbtokg(strtof(argv[1], NULL));
        printf("%0.2f pounds\n", kg);
    }
    else if (strcmp(option, "--mitokm") == 0)
    {
        float km = mitokm(strtof(argv[1], NULL));
        printf("%0.2f kilometers\n", km);
    }
    else if (strcmp(option, "--oztog") == 0)
    {
        float g = oztog(strtof(argv[1], NULL));
        printf("%0.2f grams\n", g);
    }
    else
    {
        printf("Unrecognized command.\n");
        return 1;
    }

    return 0;
}