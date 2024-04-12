/** \file matrix.cpp
 * \brief This file contains the implementation file for a small matrix Library which is 0 based
 * \author Charalambos Hadjigeorgiou
 * \date 12/04/2024
 * \copyright UNic
*/

#include "matrix.h"
#include <iostream>
#include <cassert>

using namespace std;

/**
 * Prints the content of the matrix
 * <BR>
 * @param mat The Matrix to be shown
 * @param maxRow How many rows the matrix has
 */
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
    
    cout <<"\nContent of the matrix: ";
    // @todo make it look nicer,
    for (int i = 0; i < maxRow; ++i) {
        cout << "\nR" << i << ": ";
        for (int j = 0; j < MAX_COL; ++j) {
            cout << mat [i][j] << "\t";
        }
    }
}

/**
 * Returns the sums of the colums of the matrix (reduction)
 * @warning...
 * <BR>
 * @param mat the matrix
 * @param matRow How many rows the matrix has
 * @return The sums of the colums as a Vector
 */
double* sumOfColms(const double mat[][MAX_COL], const int matRow) {
    double sums = new double[MAX_COL]{ 0 }
    
    for (int i = 0; i < MAX_ROW; i++)
        sums[i] = sumOfCol(mat, i, maxRow);
    
    return sums;
}

/**
 * Return the sum of the specified column.
 *
 * @param mat the matrix
 * @param column the column to sum
 * @param maxRow How many rows the matrix has
 * @return The sum of the specified column
 */

double sumOfCol(const double mat [][MAX_COL], const int column, const int maxRow) {
    assert (maxRow > 0);
    assert (column >= 0 && column < MAX_COL);
    
    double sum = 0;
    
    for (int i = 0; i <maxRow; i++) {
        sum += mat[i][column];
    }
    
    return sum;
}
