using namespace std;
#include <iostream>
#include <stdbool.h>
#include <stdio.h>
#define n 6
  
void printSolution(int chessboard[n][n]) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            printf(" %d ", chessboard[i][j]); 
        printf("\n"); 
    } 
} 
  

bool isSafe(int chessboard[n][n], int row, int col) 
{ 
    int i, j; 
  
    
    for (i = 0; i < col; i++) 
        if (chessboard[row][i]) 
            return false; 
  
    
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (chessboard[i][j]) 
            return false; 
  
    
    for (i = row, j = col; j >= 0 && i < n; i++, j--) 
        if (chessboard[i][j]) 
            return false; 
  
    return true; 
} 
  

bool solveNQUtil(int chessboard[n][n], int col) 
{ 
    
    if (col >= n) 
        return true; 
  
    
    for (int i = 0; i < n; i++) { 
        
        if (isSafe(chessboard, i, col)) { 
            
            chessboard[i][col] = 1; 
  
            
            if (solveNQUtil(chessboard, col + 1)) 
                return true; 
            chessboard[i][col] = 0;  
        } 
    } 
    return false; 
} 
bool solveNQ(int chessboard[n][n]) 
{ 
    if (solveNQUtil(chessboard, 0) == false) { 
        printf("Solution does not exist"); 
        return false; 
    } 
  
    printSolution(chessboard); 
    return true; 
} 
int main() 
{	cout<<"enter the chess board\n";
	int chessboard[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>chessboard[i][j];
    solveNQ(chessboard); 
    return 0; 
} 
