
class Solution {
public:


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size(); 

        if(m>n){
            swap(nums1,nums2);
            swap(m,n);
        }

        int st = 0;
        int end = m;

        double median = 0;

        while(st<=end){
            int mid1 = st+(end-st)/2;
            int mid2 = (m+n+1)/2 - mid1;

            int l1 = INT_MIN;
            int l2 = INT_MIN;
            int r1 = INT_MAX;
            int r2 = INT_MAX;

            if(mid1-1>=0) l1 = nums1[mid1-1];
            if(mid2-1>=0) l2 = nums2[mid2-1];
            if(mid1<m) r1 = nums1[mid1];
            if(mid2<n) r2 = nums2[mid2];
           
            if(l1>r2){
                end = mid1-1;
            }else if(l2>r1){
                st = mid1+1;
            }else{
                if((n+m)%2==0){
                    median = double(max(l1,l2)+min(r1,r2))/2.0;
                }else{
                    median = max(l1,l2);
                }
                break;
            }
        }

        return median;


    }


};
