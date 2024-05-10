/** \file Matrix.h
 * \brief This file contains the header file for a small matrix Library which is 0-based
 * \author Charalambos Hadjigeorgiou
 * \date 12/04/2024
 * \copyright UNic
*/

#ifndef MATRIX_H
#define MATRIX_H

const int MAX_COL = 5;

//prototypes
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillWithRandomNum(double [][MAX_COL], const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
double SumofRow(const double mat[][MAX_COL], const int row, const int maxRow);
double* sumOfCols(const double mat[][MAX_COL], const int matRow);
double* sumOfRows(const double mat[][MAX_COL], const int maxRow);
double sumOfMatrix(const double mat[][MAX_COL], const int maxRow);

#endif
