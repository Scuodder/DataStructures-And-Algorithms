#include<iostream>
using namespace std;


void mazeSolver(int maze[][20], int path[][20], int x, int y, int n ) {

if (x<0 || x>=n || y<0 || y>=n) {
     return;
}

if (path[x][y]==1 || maze[x][y]==0) {
    return;
}

if (x == n-1 && y == n-1) {
    path[x][y] = 1 ;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
           cout << path[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    path[x][y] = 0 ;
    return ;
}

path[x][y]  = 1;

mazeSolver(maze, path, x+1, y, n) ; 
mazeSolver(maze, path, x-1, y, n) ; 
mazeSolver(maze, path, x, y+1, n) ; 
mazeSolver(maze, path, x, y-1, n) ; path[x][y] = 0 ;

return ;

} 


int main () {
    int maze[20][20] = {
        {1,1,0},
        {1,1,1},
        {0,1,1}
    } ;
    int path[20][20] = {0};
        
    mazeSolver(maze, path, 0, 0, 3);
    
       
    return 0;
}