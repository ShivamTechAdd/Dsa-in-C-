#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex,edges;
    cout<<"Enter no of v and e:-";
    cin>>vertex>>edges;

    //directed weighted
    vector<vector<int> >adj(vertex,vector<int>(vertex,0));

    int u,v,weight;
    for(int i=0;i<edges;i++){
        cout<<"u , v and weight:-";
        cin>>u>>v>>weight;
        adj[u][v]=weight;
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