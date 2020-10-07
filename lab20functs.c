/** lab20functs.c
 * ===========================================================
 * Name: Jacob Garbrecht, 5 October 2020
 * Section: M6-7A
 * Project: Lab 20
 * Purpose: function definitions for lab 20
 * ===========================================================
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "lab20functs.h"

/**   ----------------------------------------------------------
 * @fn    bool again()
 * @brief asks the user if they want to reprint a table
 * @param :N/A
 * @return true if user input y or Y, else false
 */
bool again() {
    char doAgain;
    bool reloop;

    fprintf(stdout, "Would you like to do this again?\n");
    fflush(stdin);
    fscanf(stdin, " %c", &doAgain);

    if (tolower(doAgain) == 'y') {
        reloop = true;
    }
    else {
        reloop = false;
    }

    return reloop;
}

/**   ----------------------------------------------------------
 * @fn    double fToC(double farenheit)
 * @brief takes farenheit and converts to celsius
 * @param farenheit: temperature in farenheit
 * @return temperature in celsius
 */
double fToC(double farenheit) {
    double celsius = (farenheit - 32) / 1.8;

    return celsius;
}

/**   ----------------------------------------------------------
 * @fn    double cToK(double celsius)
 * @brief takes celsius and converts to kelvin
 * @param celsius: temperature in celsius
 * @return temperature in kelvin
 */
double cToK(double celsius) {
    double kelvin = celsius + 273.15;

    return kelvin;
}

/**   ----------------------------------------------------------
 * @fn    double getInput(char string[], double minVal, double maxVal)
 * @brief prints string, then gets a double from user between minVal and maxVal
 * @param string[]: string to print
 * @param minVal: minimum value that can be input
 * @param maxVal: maximum value that can be input
 * @return user input val
 */
double getInput(char string[], double minVal, double maxVal) {
    double inputVal;

    do {
        fprintf(stdout, "%s", string);
        fscanf(stdin, "%lf", &inputVal);

        if ((inputVal >= maxVal) || (inputVal <= minVal)) {
            fprintf(stdout, "Your input is outside of the range %.2lf to %.2lf.\n", minVal, maxVal);
            fprintf(stdout, "Please re-enter.\n");
        }
        else {
            break;
        }

    } while(true);
    
    return inputVal;
}

/**   ----------------------------------------------------------
 * @fn    void printTable(double minFarenheit, double maxFarenheit, double stepFarenheit)
 * @brief prints temperature conversion table
 * @param minFarenheit: starting value for farenheit column
 * @param maxFarenheit: ending value for farenheit column
 * @param stepFarenheit: distance between values in farenheit column
 * @return N/A
 */
void printTable(double minFarenheit, double maxFarenheit, double stepFarenheit) {
    double farenheitVal;
    double celsiusVal;
    double kelvinVal;

    fprintf(stdout, "\n\n");
    fprintf(stdout, "|-----------------------------|\n");
    fprintf(stdout, "|                             |\n");
    fprintf(stdout, "|   Temperature Conversions   |\n");
    fprintf(stdout, "|                             |\n");
    fprintf(stdout, "|-----------------------------|\n");
    fprintf(stdout, "|Farenheit| Celsius | Kelvin  |\n");
    fprintf(stdout, "|-----------------------------|\n");

    for (double i = minFarenheit; i < (maxFarenheit + .001); i += stepFarenheit) {
        farenheitVal = i;
        celsiusVal = fToC(farenheitVal);
        kelvinVal = cToK(celsiusVal);

        fprintf(stdout, "|%9.2lf|%9.2lf|%9.2lf|\n", farenheitVal, celsiusVal, kelvinVal);
    }

    fprintf(stdout, "|-----------------------------|\n");
}