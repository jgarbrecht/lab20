/** lab20functs.h
 * ===========================================================
 * Name: Jacob Garbrecht, 5 October 2020
 * Section: M6-7A
 * Project: Lab 20
 * Purpose: function protoypes for lab 20
 * ===========================================================
 */

#ifndef LAB20FUNCTS_H
#define LAB20FUNCTS_H

/**   ----------------------------------------------------------
 * @fn    bool again()
 * @brief asks the user if they want to reprint a table
 * @param :N/A
 * @return true if user input y or Y, else false
 */
bool again();

/**   ----------------------------------------------------------
 * @fn    double fToC(double farenheit)
 * @brief takes farenheit and converts to celsius
 * @param farenheit: temperature in farenheit
 * @return temperature in celsius
 */
double fToC(double farenheit);

/**   ----------------------------------------------------------
 * @fn    double cToK(double celsius)
 * @brief takes celsius and converts to kelvin
 * @param celsius: temperature in celsius
 * @return temperature in kelvin
 */
double cToK(double celsius);

/**   ----------------------------------------------------------
 * @fn    double getInput(char string[], double minVal, double maxVal)
 * @brief prints string, then gets a double from user between minVal and maxVal
 * @param string[]: string to print
 * @param minVal: minimum value that can be input
 * @param maxVal: maximum value that can be input
 * @return user input val
 */
double getInput(char string[], double minVal, double maxVal);

/**   ----------------------------------------------------------
 * @fn    void printTable(double minFarenheit, double maxFarenheit, double stepFarenheit)
 * @brief prints temperature conversion table
 * @param minFarenheit: starting value for farenheit column
 * @param maxFarenheit: ending value for farenheit column
 * @param stepFarenheit: distance between values in farenheit column
 * @return N/A
 */
void printTable(double minFarenheit, double maxFarenheit, double stepFarenheit);

#endif //LAB20FUNCTS_H