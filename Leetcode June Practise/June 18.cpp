class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size();
        int left=0, right= len-1,  mid;
        //binary search
        while(left<=right)
        {
            mid=left+ (right-left)/2;
            if(citations[mid] >= (len-mid))
                right = mid - 1;
            else left = mid + 1;
        }
        return len - left;
    
    }
};
