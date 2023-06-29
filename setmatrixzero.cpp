#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int col=0;
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			if(matrix[i][j]==0){
				matrix[i][0]=0;
				if(j==0) col=1;
				else matrix[0][j]=0;
			}
		}
	}
	for(int i=1;i<matrix.size();i++){
		for(int j=1;j<matrix[0].size();j++){
			if(matrix[i][j]!=0){
				if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
			}
		}
	}
	if(matrix[0][0]==0){
		for(int j=0;j<matrix[0].size();j++) matrix[0][j]=0;
	}
	if(col==1) {
		for(int i=0;i<matrix.size();i++) matrix[i][0]=0;
	}
}