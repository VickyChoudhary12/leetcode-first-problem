class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

     nums1.insert(nums1.end(),nums2.begin(),nums2.end());
     sort(nums1.begin(),nums1.end());
     int k=nums1.size();
     if(k%2==1){
        return (nums1[k/2]);
     }
     else{
        int mid1=nums1[k/2-1];
        int mid2=nums1[k/2];
        return( mid1+mid2)/2.0;
     }
    
     
    }  
};