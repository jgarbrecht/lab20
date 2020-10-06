/** lab20main.c
 * ===========================================================
 * Name: Jacob Garbrecht, 5 October 2020
 * Section: M6-7A
 * Project: Lab 20
 * Purpose: main function for lab 20, prints a temperature conversion
 *          chart for farenheit, celsius, and kelvin
 * ===========================================================
 */
#include <stdbool.h>
#include <stdio.h>
#include "lab20functs.h"

int main(void) {
    //printf("%lf\n", farenheitToCelsius(70));
    //printf("%lf\n", celsiusToKelvin(farenheitToCelsius(70)));

    double minF = 0.0;
    double maxF = 0.0;
    double stepF = 0.0;

    do {
        minF = getInput("Minimum Farenheit temperature: ", -459.67, 10706.0);
        maxF = getInput("Maximum Farenheit temperature: ", minF, 10706.0);
        stepF = getInput("What step size: ", 0, (maxF - minF)/2);
        printTable(minF, maxF, stepF);
    } while(again());

    return 0;
}