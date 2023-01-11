class SubrectangleQueries {
public:
    //d
    vector<vector<int>> v;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        swap(v, rectangle);
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        // for row1 meets with row2
        for (int i=row1; i<=row2;i++)
            // for col1 meets col2
            for (int j=col1;j<=col2;j++)
                // replace all the values
                v[i][j]=newValue;
    }
    
    int getValue(int row, int col) {
        return v[row][col];      
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */