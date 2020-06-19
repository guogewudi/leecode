#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp1(vector<int> a, vector<int> b){
    return a[1]<b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() == 0) {
            return 0;
        }
        git commit -m "first commit"
        if (points.size() == 1) {
            return 1;
        }
        sort(points.begin(), points.end(), cmp1);
        int total = 1;
        int pre = points[0][1];
        int start;
        int end;
        for (int i = 1; i < points.size(); i++) {
            int start = points[i][0];
            if (start > pre) {
                total++;
                pre = points[i][1];
            }
        }
        return total;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
