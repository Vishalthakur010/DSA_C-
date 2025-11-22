// Rat in a maze

#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][3], vector<vector<bool>> &visited){
    if( ( (i>=0 && i<row) && (j>=0 && j<col)) && (arr[i][j] == 1) && (visited[i][j] == false) ){
        return true;
    }
    else{
        return false;
    }
}

void solveMaze(int arr[][3], int row, int col, int i, int j, vector<vector<bool>>& visited, vector<string>& path, string output){
    // base case
    if(i == row-1 && j == col-1){
        path.push_back(output);
        return;
    }

    int dx[4]={1, 0, 0, -1};
    int dy[4]={0, -1, +1, 0};
    char direction[4]={'D', 'L', 'R', 'U'};

    for(int k=0; k<4; k++){
        int newx = i + dx[k];
        int newy = j + dy[k];
        char dir = direction[k];
        
        if(isSafe(newx, newy, row, col, arr, visited)){
         // mark visited as true
        visited[newx][newy] = true;

        // Recursive call
        solveMaze(arr, row, col, newx, newy, visited, path, output+dir );

        // backtrack
        visited[newx][newy] = false;   
        }
    }

    // // Down -> i+1, j
    // if(isSafe(i+1, j, row, col, arr, visited)){

    //     // mark visited as true
    //     visited[i+1][j] = true;

    //     // Recursive call
    //     solveMaze(arr, row, col, i+1, j, visited, path, output+"D" );

    //     // backtrack
    //     visited[i+1][j] = false;
    // }
    
    // // Left -> i , j-1
    // if(isSafe(i, j-1, row, col, arr, visited)){

    //     // mark visited as true
    //     visited[i][j-1] = true;

    //     // Recursive call
    //     solveMaze(arr, row, col, i, j-1, visited, path, output+"L" );

    //     // backtrack
    //     visited[i][j-1] = false;
    // }

    // // Right -> i , j+1
    // if(isSafe(i, j+1, row, col, arr, visited)){

    //     // mark visited as true
    //     visited[i][j+1] = true;

    //     // Recursive call
    //     solveMaze(arr, row, col, i, j+1, visited, path, output+"R" );

    //     // backtrack
    //     visited[i][j+1] = false;
    // }

    // // Up -> i-1, j
    // if(isSafe(i-1, j, row, col, arr, visited)){

    //     // mark visited as true
    //     visited[i-1][j] = true;

    //     // Recursive call
    //     solveMaze(arr, row, col, i-1, j, visited, path, output+"U" );

    //     // backtrack
    //     visited[i-1][j] = false;
    // }
}

int main(){
    int maze[3][3] = {
        {1,0,0},
        {1,1,0},
        {1,1,1}
    };
    if(maze[0][0] == 0){
        cout << "No path exists" << endl;
        return 0;
    }

    int row = 3;
    int col = 3;

    vector<vector<bool> > visited(row, vector<bool>(col, false));

    // set the source value as true
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    solveMaze(maze, row, col, 0,0, visited, path, output);

    cout << "Printing the results : " << endl;
    for(auto i : path){
        cout << i << " ";
    }
    cout << endl;

    if(path.size() == 0){
        cout << "No path exist" << endl;
    }
}