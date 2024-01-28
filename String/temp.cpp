    #include <iostream>
    #include <vector>
    using namespace std;

    void print(vector<vector<int>> &arr2)
    {
        for (int i = 0; i < arr2.size(); i++)
        {
            for (int j = 0; j < arr2[0].size(); j++)
            {
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
    }

    void SetMatrixZeroes(vector<vector<int>> &arr)
    {
        int rows = arr.size();
        int cols = arr[0].size();

        // Use separate vectors to mark rows and columns to be zeroed
        vector<bool> zeroRows(rows, false);
        vector<bool> zeroCols(cols, false);

        // Mark the rows and columns to be zeroed
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] == 0)
                {
                    zeroRows[i] = true;
                    zeroCols[j] = true;
                }
            }
        }

        // Set rows to zero
        for (int i = 0; i < rows; i++)
        {
            if (zeroRows[i])
            {
                for (int j = 0; j < cols; j++)
                {
                    arr[i][j] = 0;
                }
            }
        }

        // Set columns to zero
        for (int j = 0; j < cols; j++)
        {
            if (zeroCols[j])
            {
                for (int i = 0; i < rows; i++)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }

    int main()
    {
        // vector<vector<int>> arr = {
        //     {1, 2, 3},
        //     {4, 5, 6},
        //     {7, 8, 9},
        // };

        vector<vector<int>> arr2 = {
            {2, 4, 3},
            {1, 0, 0},
        };

        // int row = arr.size();
        // int col = arr[0].size();
        // int row = arr2.size();
        // int col = arr2[0].size();
        // int diagonalSum = 0;

        // for (int i = 0; i < row; i++)
        // {
        //     for (int j = 0; j < col; j++)
        //     {
        //         if (i == j)
        //         {
        //             diagonalSum += arr[i][j];
        //         }
        //     }
        // }

        // cout << "Sum of the diagonal elements: " << diagonalSum;
        SetMatrixZeroes(arr2);

        cout << "Matrix after setting zeroes:" << endl;
        print(arr2);

        return 0;
    }
