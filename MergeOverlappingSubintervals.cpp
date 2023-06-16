#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size() ;
    vector<vector<int>> answer ;

    for(int i = 0 ;i<n;i++){
        int start = intervals[i][0];
        int end = intervals[i][1];

        if(answer.size() && end<=answer.back()[1]){
            continue;
        }

        for(int j = i+1; j<n;j++){
            if(end>=intervals[j][0]){
                end = max(end,intervals[j][1]);
            }
            else {
                break;
            }
        }
        answer.push_back({start,end});
    }
    return answer;
}
int main() {
vector<vector<int>> answer = {{1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}};
vector<vector<int>> ans = merge(answer);
int n = ans.size();
for(int i = 0 ;i<n;i++){
    for(int j = 0 ;j<=1;j++){
        cout <<ans[i][j] <<"," ;
    }
}

}
