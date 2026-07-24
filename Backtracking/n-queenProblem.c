
#include <stdio.h>

int isSafe(int row, int col);
int solve(int row);
int board[10][10],n;

int main() {
    
    printf("Enter number of queens: \n");
    scanf("%d",&n);
    
    if(solve(0)){
        printf("Solution :\n");
        for(int i=0 ;i<n ; i++){
            for(int j=0 ; j<n ; j++)
               printf(" %d",board[i][j]);
               
               printf("\n");
        }
    }
    else{
        printf("No solution exist ");   
    }
    return 0;
}

int solve(int row){
    
    int col;
    if(row>=n)
        return 1;

        for( col=0 ; col<n ; col++){

            //place the queen
            if(isSafe(row,col)){
                board[row][col] = 1 ;
                 
                //recursion
                if(solve(row+1))
                    return 1;

                //backtrack    
                board[row][col] = 0 ;
            }
        }
        return 0;
}

int isSafe(int row , int col){
    int i, j;
    //check for column
    for(i=0 ; i<row ; i++){
        if(board[i][col]==1)
            return 0;
    }
    //check for left diagonal
    for(i=row-1 ,j=col-1 ; i>=0 , j>=0; i--,j--){
        if(board[i][j]==1)
            return 0;
    }

    //check for right diagonal
    for(i=row-1 , j=col+1 ; i>=0 , j<n ; i-- ,j++){
        if(board[i][j]==1)
        return 0;
    }
    return 1;
}