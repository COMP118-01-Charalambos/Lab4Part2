/** \file Lab4Part2.cpp
 * \brief This file contains a small Matrix manipulation program
 * \author Charalambos Hadjigeorgiou
 * \date 05/04/2024
 * \copyright UNic
 */

#include <iostream>
#include <cassert>

using namespace std;

const int MAX_COL = 5;
void printMatrix(const double mat[][MAX_COL], const int maxRow);

/**
 * Shows the menu and does the selection
 * <BR>
 * @return Returns 0
 */

int main () {
    const int MAX_ROW = 6;
    int choice;
    double mat[MAX_ROW][MAX_COL] = { 0 };
    
    do {
        
        cout << "\n1) Print Matrix";
        cout << "\n2) Fill with randoms";
        
        cout <<"\n8) Exit";
        cout <<"\nEnter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                printMatrix(mat, MAX_ROW);
                break;
            case 2:
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
