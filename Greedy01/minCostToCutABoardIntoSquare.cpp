#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int x,int y){
    return x>y; //decr order;
}

int minCostToBreakIntoSquare(int n , int m , vector<int>& ver , vector<int>& hori){
    sort(ver.begin(),ver.end(),cmp);
    sort(hori.begin(),hori.end(),cmp);
    int hz=1,vr=1;
    int h=0 , v=0;
    int ans=0;
    while(h<ver.size() && v<hori.size()){
        if(ver[h]>hori[v]){
            ans+=ver[v]*vr;
            hz++;

            v++;
        }
        else{
            ans+=hori[h]*hz;
            vr++;

            h++;
        }

        while(v<ver.size()){
            ans+=ver[v]*vr;
            hz++;

            v++;
        }
        
        while(h<hori.size()){
            ans+=hori[h]*hz;
            vr++;

            h++;
        }

    }
    return ans;
}

int main() {
    vector<int> x = {2, 1, 3, 1, 4}; // Horizontal cut costs
    vector<int> y = {4, 1, 2};        // Vertical cut costs
    int n=x.size()+1;
    int m=y.size()+1;

    cout << "Minimum cost to cut the board is: " << minCostToBreakIntoSquare(n,m,x, y) << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int minCostToCutBoard(vector<int> &X, vector<int> &Y) {
    sort(X.rbegin(), X.rend()); // Sort in descending order
    sort(Y.rbegin(), Y.rend());

    int hzntl = 1, vert = 1; // Initial pieces
    int i = 0, j = 0;
    int cost = 0;

    while (i < X.size() && j < Y.size()) {
        if (X[i] > Y[j]) {
            cost += X[i] * vert;
            hzntl++;
            i++;
        } else {
            cost += Y[j] * hzntl;
            vert++;
            j++;
        }
    }

    // Remaining cuts
    while (i < X.size()) {
        cost += X[i] * vert;
        i++;
    }

    while (j < Y.size()) {
        cost += Y[j] * hzntl;
        j++;
    }

    return cost;
}

int main() {
    vector<int> X = {2, 1, 3, 1, 4}; // Horizontal cuts
    vector<int> Y = {4, 1, 2};        // Vertical cuts

    cout << "Minimum cost to cut the board is: " << minCostToCutBoard(X, Y) << endl;
    return 0;
}
*/