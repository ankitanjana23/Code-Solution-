#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

/* MY solution final O(n^3 ) [-1,2 ,3]   solve it also */

void rowZero(vector<vector<int>> &matrix , int m , int n , int i ){
   for(int j = 0 ;j<n;j++){
    if(matrix[i][j] !=0){
        matrix[i][j] = INT_MIN +1  ;
    }
   }
}

void columnZero(vector<vector<int>> &matrix , int m , int n , int j){
    for(int i = 0 ;i<n;i++){
    if(matrix[i][j] !=0){
        matrix[i][j] = INT_MIN + 1 ;
    }
   }
}

void zeroMatrix (vector<vector<int>> &matrix , int m , int n )  {
    //find how many zero inside the matrix 
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ;j<n;j++){
            if(matrix[i][j]==0) {
                rowZero(matrix , m, n, i);
                columnZero(matrix , m, n, j);
            }
        }
    }

    //find -1 and replace with 0 
    cout <<"Finel Result" <<endl;
    for(int i = 0 ;i<m ; i++){
        for(int j = 0 ;j<n ;j++){
            if(matrix[i][j]== (INT_MIN +1) ){
                matrix[i][j] = 0;
            }
            cout <<matrix[i][j] <<" " ;
        }
        cout <<endl;
    }
}

int main () {
    vector<vector<int>> matrix = { {-1,1,1} , {1,0,1} , {1,1,1} } ;   //don't used & empersend it will store address 
    int m = matrix.size() ;         //row
    int n = matrix[0].size();      //columns 
    zeroMatrix(matrix, m , n) ;

    //printing the finel 2D vector 
    /* for(int i = 0 ;i<m ; i++){
        for(int j = 0 ; j<n ;j++){
            cout << answer[i][j] <<" ";
        }
        cout <<endl;

    }  */
}
