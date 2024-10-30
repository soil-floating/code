#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&,int,int,int,int,bool);
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> matrix;
    for(int i=1;i<=n;i++)
    {
        vector<int> tmp;
        for(int j=1;j<=n;j++)
        {
            tmp.push_back(i*n-n+j);
        }
        matrix.push_back(tmp);
    }
    vector<vector<int>> matrix_tmp(matrix);
    int x,y,r;
    bool direction;
    for(int i=0;i<m;i++)
    {
        cin >> y >> x >> r >> direction;
        change(matrix,n,x-1,y-1,r,direction);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << matrix[i][j] << ' ';
        }
            cout << endl;
    }
    return 0;
}
void change(vector<vector<int>> &matrix,int n,int x,int y,int r,bool direction)
{
    int copy[2*r+1][2*r+1];
    for(int i=y-r;i<=y+r;i++)
        for(int j=x-r;j<=x+r;j++)
        {
            int x1;
            int y1;
            if(!direction)
            {
                x1=-(i-y)+x;
                y1=(j-x)+y;
            }
            else
            {
                x1=(i-y)+x;
                y1=-(j-x)+y;
            }
            copy[y1-(y-r)][x1-(x-r)]=matrix[i][j];
        }
        for(int i=y-r;i<=y+r;i++)
            for(int j=x-r;j<=x+r;j++)
                matrix[i][j]=copy[i-(y-r)][j-(x-r)];
}