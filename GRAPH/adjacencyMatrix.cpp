#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex,edges;
    cout<<"Enter no of v and e:-";
    cin>>vertex>>edges;

    //undirected unweighted->bool array but weighted is type int;
    vector<vector<int> >adj(vertex,vector<int>(vertex,0));

    int u,v,weight;
    for(int i=0;i<edges;i++){
        cout<<"u , v and weight:-";
        cin>>u>>v>>weight;
        
        if(u >= vertex || v >= vertex || u < 0 || v < 0){
        cout << "Invalid edge input!\n";
         continue;
        }

        adj[u][v]=weight;
        adj[v][u]=weight;
    }
    cout<<endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}