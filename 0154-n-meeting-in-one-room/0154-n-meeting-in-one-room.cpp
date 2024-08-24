class Solution {
    struct meeting{
        int s;
        int e;
        int pos;
    };
public:
    bool static comparator(struct meeting m1,meeting m2){
        if(m1.e<m2.e) return true;
        return false;
    }
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        struct meeting meet[n];
        for(int i=0;i<n;i++){
            meet[i].s=start[i],meet[i].e=end[i],meet[i].pos=i+1;
        }
        sort(meet,meet+n,comparator);
        int freetime=meet[0].e;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(meet[i].s>freetime){
                cnt++;
                freetime=meet[i].e;
            }
        }
        return cnt;
    }
};
