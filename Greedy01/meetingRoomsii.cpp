#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minMeetingRooms(  vector<vector<int>>& interval){
    vector<int> start;
    vector<int>ending;
    for(auto ele: interval){
        start.push_back(ele[0]);
        ending.push_back(ele[1]);
    }

    sort(start.begin(),start.end());
    sort(ending.begin(),ending.end());

    int ans=0;
    int rooms=0;
    int i=0,j=0; //i->start j->end;
    while(i<start.size() and j<ending.size()){
        if(start[i]<ending[j]){ //meeting is started
            rooms++;
            ans=max(ans,rooms);
            i++;
        }
        else if(start[i]>ending[j]){  //start[i]>ending[j]  a meeting is ended so 1 room is empty
            rooms--;
            j++;
        }
        else{  //start[i]==ending[j] meeting is started and ended;
            //at same time 1 room allocated and 1 room vacated so no need to update in rooms;
            j++;
        }
    }

    return ans;
}

int main(){
    vector<vector<int>> interval={{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    cout<<minMeetingRooms(interval)<<" ";
}
