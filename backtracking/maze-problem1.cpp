// find if any path is possible 

#include <iostream>
using namespace std ;

bool isPossible (int maze[20][20], int path[20][20], int x, int y, int size) {

    if (x < 0 || x > size-1 || y < 0 || y > size-1 ) {
        return false;
    }

    if (maze[x][y] == 0 || path[x][y] == 1) {
        return false ;
    }

    if ((x == size-1) && (y == size-1)) {
        path[x][y] = 1;       
        return true;
    }

    path[x][y] = 1;
    // if i'm keeping one on my current position in path array initially then only i'll be able to find possible paths ...
    // so backtacking is necessary ...
    
 
    if (isPossible(maze, path, x-1, y, size) )  {
        // path[x][y] = 1;
        return true ;
    }

    if (isPossible(maze, path, x+1, y, size) ) {
            // path[x][y] = 1;
        return true ;
    }

    if (isPossible(maze, path, x, y-1, size) ) {
        // path[x][y] = 1;
        return true ;
    }

    if (isPossible(maze, path, x, y+1, size)  ) {
    // path[x][y] = 1;
        return true ;
    }
    
    path[x][y] = 0 ;
    return false;

}

int main () {
    int maze[20][20] = {
        {1,1,0},
        {1,1,1},
        {0,1,1}
    } ;
    int path[20][20] = {0};
        
    cout << isPossible (maze, path, 0, 0, 3)<<endl;
      for(int i=0; i < 3; i++) {
            for (int j=0; j < 3; j++) {
                cout << path[i][j];
            }
            cout <<endl; 
        }
       
    return 0;
}