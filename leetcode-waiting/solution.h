//
// Created by xh on 2021/2/21.
//

#ifndef FIRST_SOLUTION_H
#define FIRST_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;


class solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n, string(n, '.'));
        backtrack(board, 0, res);
        return res;
    }

    void backtrack(vector<string>& board, int row, vector<vector<string>>& res){
        if(row==board.size()){
            res.emplace_back(board);
            return;
        }

        int n = board[row].size();
        for(int col=0; col<n; ++col){
            if(!isValid(board, row, col)){
                continue;
            }

            board[row][col] = 'Q';
            backtrack(board, row+1, res);
            board[row][col] = '.';

        }
    }

    bool isValid(vector<string>& board, int row, int col){
        int n = board.size();
        //检查同列
        for(int i=0; i<row; i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //右上
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        //左上
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
};


#endif //FIRST_SOLUTION_H
