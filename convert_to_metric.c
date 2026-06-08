#include "convert_to_metric.h"

float ftoc(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

float lbtokg(float lbs)
{
    return lbs / 2.2046f;
}

float mitokm(float miles)
{
    return miles * 1.6f;
}

float oztog(float ounces)
{
    return ounces * 28.35f;
}