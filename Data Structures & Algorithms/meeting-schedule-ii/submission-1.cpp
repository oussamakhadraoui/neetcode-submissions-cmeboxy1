/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),[](Interval &a ,Interval&b){
            return b.start>a.start;
        });
        priority_queue<int,vector<int>,greater<int>>pq;
        for(Interval &a:intervals){
            if(pq.size()&&pq.top()<=a.start){
                pq.pop();
            }
            pq.push(a.end);
        }
        return pq.size();
    }
};
