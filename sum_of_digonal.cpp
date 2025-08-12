#include <bits\stdc++.h>
using namespace std;

vector<vector<int>> sortRows(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++) {
        sort(matrix[i].begin(), matrix[i].end());
    }
    return matrix;
}

vector<vector<int>>sortCols(vector<vector<int>>& matrix){
    int row = matrix.size();
    int col = matrix[0].size();

     // {3, 11, 5},
    // {14, 95, 246},
    // {77, 28, 9}

    // transpose the matrix
    for (int i = 0; i < col; i++)
    {
        //create a temporary vector to store the column elements
        //and sort it
        vector<int> temp;
        for (int j = 0; j < row; j++) {
            temp.push_back(matrix[j][i]);
        }

       
        //sort the temporary vector
        //and then put it back to the matrix
        sort(temp.begin(), temp.end());
        //put the sorted elements back to the matrix
        //in the same column
        for (int i = 0; i < row; i++)
        {
            cout << temp[i] << " ";
        }


        for (int j = 0; j < row; j++) {
            matrix[j][i] = temp[j];
        
        }
    }
    return matrix;
}


vector<vector<int>>sortColfun(vector<vector<int>>& matrix){


    //store the traspose in new matrix
    //sort the new matrix rows
    //transpose the new matrix back to original matrix

    int rows =matrix.size();
    int cols =matrix[0].size();


    vector<vector<int>> newMatrix(rows,vector<int>(cols));

///transpose of the matrix
    for(int i=0;i<rows ;i++){
        for(int j=0;j<cols;j++){
            newMatrix[j][i]=matrix[i][j];
        }
    }

//sort the rows now 
for(int i=0;i<rows;i++){
    sort(newMatrix[i].begin(), newMatrix[i].end());
}

//transpose the new matrix back to original matrix
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            matrix[j][i]=newMatrix[i][j];
        }
    }

    return matrix;
}



int main(){
// int rows, cols;
//declare the 2d matrix
// cin>> rows >> cols;
// int rows=3 ,cols=3;

// vector<vector<int>>matrix(rows,vector<int>(cols));


vector<vector<int>>matrix={
    {3, 11, 5},
    {14, 95, 246},
    {77, 28, 9}
};
// cout<<matrix.size()<<"row ____"<<endl;
// cout<<matrix[0].size()<<"column ____"<<endl;
// cout<<matrix[0][0]<<endl;
// cout<<matrix[0][5]<<endl;
// cout<<matrix[3][2]<<endl;


int row =matrix.size();
int col =matrix[0].size();

// sortRows(matrix);
// sortCols(matrix);

sortColfun(matrix);




cout<<"_________________"<<endl;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

return 0;

}