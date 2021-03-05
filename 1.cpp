#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row = 3, col = 3, arr[3][3] = {1,2,3,4,5,6,7,8,9}, rowMax=0, colMax=0;

    // Finding RowMax
    for(int i=0; i<row; i++)
    {
        int sum = 0;
        for(int j=0; j<col; j++)
            sum += arr[i][j];
        if(rowMax<sum)
            rowMax = sum;
    }

    // Finding ColMax
    for(int i=0; i<col; i++)
    {
        int sum = 0;
        for(int j=0; j<row; j++)
            sum += arr[j][i];
        if(colMax<sum)
            colMax = sum;
    }

    cout<<min(rowMax, colMax);

    return 0;
}
