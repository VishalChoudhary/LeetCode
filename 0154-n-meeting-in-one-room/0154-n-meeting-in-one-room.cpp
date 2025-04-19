class Solution {
  public:
    struct meeting{
      int s;
      int e;
      int pos;
    };
    static bool comparator(meeting m1, meeting m2){
        return m1.e<m2.e;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int n=start.size();
        vector<meeting> meet(n);
        for(int i=0;i<n;i++){
            meet[i].s=start[i];
            meet[i].e=end[i];
            meet[i].pos=i+1;
        }
        sort(meet.begin(),meet.end(),comparator);
        int cnt=1;
        int freetime=meet[0].e;
        for(int i=1;i<n;i++){
            if(meet[i].s>freetime){
                cnt++;
                freetime=meet[i].e;
            }
        }
        return cnt;
    }
};
