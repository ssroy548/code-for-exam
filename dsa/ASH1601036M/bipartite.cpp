#include<bits/stdc++.h>
using namespace std;

int graph[100][100];
int color[100];

queue<int> q;

void setcolor()
{
    for(int i=0;i<100;i++)
    {
        color[i]=-1;
    }
}

int main()
{
    int N;
    cout<<"How many node : ";
    cin>>N;
    cout<<endl;
    cout<<"Enter adjacency matrix of the graph\n";

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cin>>graph[i][j];
        }
    }
    setcolor();
    int checkBipartite=1;
    int x;

    q.push(1);
    color[1]=0;

    while(!q.empty()&&checkBipartite)
    {
        x=q.front();
        q.pop();
        for(int i=1;i<=N;i++)
        {
            if(graph[x][i])
            {
                if(color[i]==-1)
                {
                    color[i]=1-color[x];
                    q.push(i);
                }
                else if(color[i]==color[x])
                {
                    checkBipartite=0;
                    break;
                }
            }
        }
    }
    cout<<(checkBipartite?"It is a Bipartite graph\n":"It is not a Bipartite graph\n");

    return 0;
}
