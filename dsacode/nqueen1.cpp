#include<iostream>
using namespace std;
#define n 4
bool board[n][n] = {false};
bool issafe(int row, int col)
{
    for(int i = 0; i< col; i++)
    {
        if(board[row][i])
        {
            return false;
        }
    
    }
    for(int i = row, j = col; i>= 0 &&j>= 0; i--, j--)
    {
        if(board[i][j])
        {
            return false;
        }
    }
    for(int i = row, j = col; i<n && j>=0; i++, j--)
    {
        if(board[i][j])
        {
            return false;
        }

    }
    return true;

}
bool solve(int col)
{
    if(col == n)
    {
        return true;
    }
    for(int i = 0; i< n; i++)
    {
        if(issafe(i, col))
        {
            board[i][col] = true;
            if(solve(col + 1))
            {
                return true;

            }
            board[i][col] = false;
        }
    }
    return false;
}
void print()
{
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout<<endl;
    }
}
void solveNqueen()
{
    if(!solve(0))
    {
        
        cout<<"solution does not exist"<<endl;
        return;
    }
    cout<<"solution exist"<<endl;
    print();
}
int main()
{
    solveNqueen();
    return 0;
}