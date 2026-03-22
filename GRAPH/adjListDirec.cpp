#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex,edges;
    cout<<"Enter no of v and e:-";
    cin>>vertex>>edges;

    // //undirected unweighted
    // vector<int>adjList[vertex];
    

    // int u,v,weight;
    // for(int i=0;i<edges;i++){
    //     cout<<"u , v :-";
    //     cin>>u>>v;
    //     adjList[u].push_back(v);
    //     adjList[v].push_back(u);
    // }

    //directed weighted
    vector<pair<int,int>>adjList[vertex];
    

    int u,v,weight;
    for(int i=0;i<edges;i++){
        cout<<"u , v ,weight:-";
        cin>>u>>v>>weight;
        adjList[u].push_back({v,weight});
    }

    cout<<endl;
    //print
    for(int i=0;i<vertex;i++){
        cout<<i<<"->"; //vertex
        for(int j=0;j<adjList[i].size();j++){
            cout<<"{"<<adjList[i][j].first<<" "<<adjList[i][j].second<<"} "; //first->edge //second->weight
        }
        cout<<endl;
    }
    cout<<endl;

}