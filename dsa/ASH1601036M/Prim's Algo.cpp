#include<bits/stdc++.h>
using namespace std;
int taken[100],graph[100][100],n,cost=0,mst_graph[100][100];
struct Node
{
    int u,v,w;

    Node(int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
bool operator<(Node A, Node B)
{
    return A.w>B.w;
}
priority_queue<Node>PQ;
void nodeEntry(int x)
{
    taken[x]=1;
    for(int i=0;i<n;i++)
    {
        if(graph[x][i]&&!taken[i])
            PQ.push(Node(x,i,graph[x][i]));
    }
}
int main()
{
    freopen("in.txt","r",stdin);
    cout<< "Number of Nodes\n";
    cin>>n;
    cout<<"Enter the adjacency matrix with edge wight of graph\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        cin>>graph[i][j];
    }
    memset(taken,0,sizeof(taken));
    taken[0]=1;
   nodeEntry(0);
   while(!PQ.empty())
   {
       Node N=PQ.top();
       PQ.pop();
       if(!taken[N.v])
       {
           taken[N.v]=1;
        cost+=N.w;
        nodeEntry(N.v);
       }
   }
   cout<< "Mst cost is: "<<cost;
   return 0;
}
