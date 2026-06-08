#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils/convert_to_metric.h"

int main(int argc, char *argv[])
{
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("Hello world: %s\n", argv[i]);
    // }

    if (argc < 3)
    {
        printf("Usage: %s <number> -ftoc\n", argv[0]);
        return 1;
    }

    const char *option = argv[2];

    if (strcmp(option, "-ftoc") == 0)
    {
        float c = ftoc(strtof(argv[1], NULL));
        printf("%0.2f celsius\n", c);
    }
    else if (strcmp(option, "-lbtokg") == 0)
    {
        printf("lbtokg\n");
    }
    else if (strcmp(option, "-mitokm") == 0)
    {
        printf("mitokm\n");
    }
    else if (strcmp(option, "-mitokm") == 0)
    {
        printf("mitokm\n");
    }
    else if (strcmp(option, "-gtooz") == 0)
    {
        printf("gtooz\n");
    }
    else
    {
        printf("Unrecognized command.\n");
    }

    return 0;
}