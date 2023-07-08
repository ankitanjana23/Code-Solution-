int n = matrix.size() ;
        for(int i = 0 ;i<n;i++){
            int j = n-1;
            if(matrix[i][j]== target){
                return true;
            }
            else if(matrix[i][j]>target){
                for(int j = 0 ;j<n-1;j++){
                    if(matrix[i][j] == target) return true;
                }
                return false;
            }
            else {
                continue;
            }
        }
        return false;