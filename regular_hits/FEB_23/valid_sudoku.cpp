class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        
        bool duplicateFound =false;
        for(int i=0; i<9; i++){
            vector<int> row_map(10,0);
            vector<int> col_map(10,0);
            for(int j=0; j<9; j++){
                char row_ch =board[i][j];
                if(row_ch != '.'){
                    int val =row_ch-'0';
                    if(row_map[val] == 1){
                        duplicateFound =true;
                        break;
                    }else{
                        row_map[val]++;
                    }
                }

                char col_ch =board[j][i];
                if(col_ch != '.'){
                    int val =col_ch-'0';
                    if(col_map[val] == 1){
                        duplicateFound =true;
                        break;
                    }else{
                        col_map[val]++;
                    }
                }
                    

            }
            if(duplicateFound) break;
        }
        
        if(duplicateFound) return false;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                vector<int> cell_map(10,0);
                for(int p=0; p<3; p++){
                    for(int q=0; q<3; q++){
                        int row =i*3 + p;
                        int col =j*3 + q;

                        char ch =board[row][col];
                        if(ch != '.'){
                            int val =ch - '0';
                            if(cell_map[val] == 1){
                                duplicateFound =true;
                                break;
                            }
                            else{
                                cell_map[val]++;
                            }
                        }
                        
                        
                        
                    }
                    if(duplicateFound) break;
                }
                if(duplicateFound) break;
            }
            if(duplicateFound) break;
        }
        
        return !duplicateFound;

    }
};
