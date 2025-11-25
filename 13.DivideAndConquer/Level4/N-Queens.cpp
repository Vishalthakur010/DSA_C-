// N-Queens problem
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;

void printSolution(vector<vector<char>>& board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
bool isSafe(int row, int col, vector<vector<char>>& board, int n){
    // for optimization
    if(rowCheck[row] == true) return false;
    if(upperLeftDiagonalCheck[n-1+col-row] == true) return false;
    if(bottomLeftDiagonalCheck[row+col] == true) return false;

    return true;

    // // check whether we can place the Queen at current cell

    // // check left row
    // int i=row, j=col;
    // while(j>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     j--;
    // }

    // // check upper left Diagonal
    // i=row, j=col;
    // while(i>=0 && j>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     i--, j--;
    // }

    // // check Bottom left Diagonal
    // i=row, j=col;
    // while(i<n && j>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     i++, j--;
    // }

    // Queen not found at any position, hence this is a safe position
    // return true;
}

void solve(vector<vector<char>>& board, int n, int col){
    // base case
    if(col >= n){
        printSolution(board, n);
        return;
    }

    // solve 1 case
    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){
            // place the queen
            board[row][col] = 'Q';

            // tracking through map for optimization
            rowCheck[row] = true;
            upperLeftDiagonalCheck[n-1+col-row] = true;
            bottomLeftDiagonalCheck[row+col] = true;

            // recursion call
            solve(board, n, col+1);

            // backtrack
            board[row][col] = '-';
            rowCheck[row] = false;
            upperLeftDiagonalCheck[n-1+col-row] = false;
            bottomLeftDiagonalCheck[row+col] = false;
        }
    }
}

int main(){
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n,'-'));
    int col = 0;
    // 0-> empty cell
    // 1-> Queen at the cell
    solve(board, n, col);
}