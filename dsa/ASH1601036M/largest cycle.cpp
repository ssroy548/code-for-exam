#include<iostream>
using namespace std;
int graph[100][100],big_cyc,taken[100],N,check;

void dfs(int x,int deep)
{
    for(int i=1;i<=N;i++)
    {
        if(graph[x][i])
        {
            if(i==check)
            {
                if(big_cyc<deep)
                {
                    big_cyc=deep;
                }
            }
            if(!taken[i])
            {
                taken[i]=1;
                dfs(i,deep+1);
                taken[i]=0;
            }
        }
    }
}

int main()
{
    cout<<"Enter no of node\n";
    cin>>N;
    cout<<"Enter adjacency matrix of graph\n";
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cin>>graph[i][j];
        }
    }
    big_cyc=-1;

    for(int i=1;i<=N;i++)
    {
        taken[i]=1;
        check=i;
        dfs(i,1);
        taken[i]=0;
    }

    big_cyc>0?cout<<"No of nodes in largest cycle = "<<big_cyc<<endl:cout<<"no cycle found\n";

    return 0;
}
