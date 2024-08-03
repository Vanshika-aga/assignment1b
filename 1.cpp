#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int final[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          final[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<final[i][j];
        }
        cout<<endl;
    }
}
