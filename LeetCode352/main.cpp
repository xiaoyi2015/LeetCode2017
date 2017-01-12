#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for an interval.
 */
 struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
 };

class SummaryRanges {
public:
    /** Initialize your data structure here. */
    SummaryRanges() {

    }

    void addNum(int val) {
        Interval cur = Interval(val, val);
        vector<Interval> res;
        int pos = 0;
        for(auto a: v){
            if(cur.end + 1 < a.start){
                res.push_back(a);
            }else if(cur.start > a.end + 1){
                res.push_back(a);
                pos++;
            }else if(cur.start - 1 == a.end){
                cur.start = a.start;
            }else if(cur.end + 1 == a.start){
                cur.end = a.end;
            }else{
                cur.start = min(cur.start, a.start);
                cur.end = max(cur.end, a.end);
            }

        }
        res.insert(res.begin() + pos, cur);
        v = res;
    }

    vector<Interval> getIntervals() {
        return v;
    }
private:
    vector<Interval> v;

};


int main() {

    SummaryRanges obj = SummaryRanges();
    obj.addNum(3);
    obj.addNum(7);
    obj.addNum(4);
    obj.addNum(1);
    vector<Interval> param_2 = obj.getIntervals();
    for(auto a: param_2){
        std::cout << a.start << "," << a.end << std::endl;

    }
    return 0;
}