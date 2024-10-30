#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&,vector<vector<int>>&,int,int,int,int,bool);
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
        change(matrix,matrix_tmp,n,x-1,y-1,r,direction);
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
void change(vector<vector<int>> &matrix,vector<vector<int>> &matrix_tmp,int n,int x,int y,int r,bool direction)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(i>=y-r && i<=y+r && j>=x-r && j<=x+r)
            {
                int x1=j-x;
                int y1=i-y;
                int tmp=x1;
                x1=y1;
                y1=tmp;
                if(!direction)
                {
                    x1=-x1;
                    x1+=x;
                    y1+=y;
                }
                else
                {
                    y1=-y1;
                    x1+=x;
                    y1+=y;
                }
                matrix_tmp[y1][x1]=matrix[i][j];
            }
            else
                matrix_tmp[i][j]=matrix[i][j];
        }
        for(int i=0;i<n*n;i++)
            matrix[i/n][i%n]=matrix_tmp[i/n][i%n];
}
