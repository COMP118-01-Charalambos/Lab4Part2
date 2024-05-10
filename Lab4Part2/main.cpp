/** \file Lab4Part2.cpp
 * \brief This file contains a small Matrix manipulation program
 * \author Charalambos Hadjigeorgiou
 * \date 05/04/2024
 * \copyright UNic
 */

#include <iostream>
#include <cassert>
#include <cstdlib>
#include "matrix.h"

using namespace std;

/**
 * Shows the menu and does the selection
 * <BR>
 * @return Returns 0
 */
int main () {
    const int MAX_ROW = 6;
    int choice;
    double mat[MAX_ROW][MAX_COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    double* ptrSums;
    
    do {
        
        cout << "\n1)Print Matrix";
        cout << "\n2)Fill with randoms";
        cout << "\n3)Sum of column";
        cout << "\n4)Sum of row";
        cout << "\n5)Sum of columns";
        cout << "\n6)Sum of rows";
        cout << "\n7)Sum of matrix";
        cout << "\n8) Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                printMatrix(mat, MAX_ROW);
                cout << endl;
                break;
                
            case 2:
                fillWithRandomNum(mat, MAX_ROW);
                cout << "\nMatrix filled with random numbers!";
                cout << endl;
                break;
                
            case 3:
                int column;
                cout << "\nEnter the column to sum (from 0 to 4, starting from the left): ";
                cin >> column;
                
                while (column < 0 || column >= MAX_COL) {
                    cerr << "\nWrong column! Please try again: ";
                    cin >> column;
                }
                cout << "\nSum of column " << column << " is: " << sumOfCol(mat, column, MAX_ROW);
                break;
                
            case 4:
                int row;
                cout << "\nEnter the row to sum: ";
                cin >> row;
                
                while (row < 0 || row >= MAX_ROW) {
                    cerr << "\nWrong row! Please try again: ";
                    cin >> row;
                }
                cout << "\nSum of row " << row << " is: " << sumOfRow(mat, row, MAX_ROW);
                break;
                
            case 5:
                ptrSums = sumOfCols(mat, MAX_ROW);
                
                cout << "\nSums of columns: ";
                for (int i = 0; i < MAX_COL; ++i) {
                    cout << "\n" << i << "): " << ptrSums[i];
                    cout <<"\n";
                }
                delete[] ptrSums;
                break;
                
            case 6:
                ptrSums = sumOfRows(mat, MAX_ROW);
                
                cout << "\nSum of rows: ";
                for (int i = 0; i < MAX_ROW; i++) {
                    cout << "\nR" << i << ": " << ptrSums[i];
                cout << "\n";
                }
                delete[] ptrSums;
                break;
                
            case 7:
                cout << "\nSum of matrix is: " << sumOfMatrix(mat, MAX_ROW);
                break;
                
            case 8:
                cout << "\nHave a nice day :)";
                cout << endl;
                break;
            default:
                cerr << "\nWrong choice!";
                break;
        }
    } while (choice != 8);
}

// Path: matrix.h
