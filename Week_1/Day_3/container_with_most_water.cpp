class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max_volume=0;

        while(left<right){
            int base=right-left;
            int water_height=min(height[left],height[right]);
            int volume=water_height*base;
            max_volume=max(max_volume,volume);
            
            if (height[left] < height[right]) {
             left++;
            }
             else {
                right--;
            }

        }
        return max_volume;


        
    }
};
