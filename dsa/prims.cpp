#include<bits/stdc++.h>
using namespace std;
int graph[100][100],taken[100],mst_graph[100][100],mst_cost,N;

class w8_node
{
    public:
    int wight;
    int node1;
    int node2;
    w8_node(int a,int b,int c)
    {
        wight=a;
        node1=b;
        node2=c;
    }

};


bool operator<(const w8_node& x,const w8_node& y)
{
    return x.wight>y.wight;
}

priority_queue<w8_node> pq;

void process(int x)
{
    taken[x]=1;
    for(int i=1; i<=N; i++)
    {
        if(graph[x][i]&&!taken[i])
        {
            pq.push(w8_node(graph[x][i],x,i));
        }
    }
}


int main()
{
    cout<<"enter no of node\n";
    cin>>N;
    cout<<"enter adjacency matrix with edge wight of graph\n";
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            cin>>graph[i][j];
        }
    }

    mst_cost=0;
    process(1);
    while(!pq.empty())
    {
        w8_node now=pq.top();pq.pop();
        if(!taken[now.node2])
        {
            mst_graph[now.node1][now.node2]=mst_graph[now.node2][now.node1]=now.wight;
            mst_cost+=now.wight;
            process(now.node2);
        }

    }

    cout<<"MST cost= "<<mst_cost<<endl;
    cout<<"Mst graph will be\n";

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cout<<mst_graph[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
