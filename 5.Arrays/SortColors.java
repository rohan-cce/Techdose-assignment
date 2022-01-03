class Solution {
    public void sortColors(int[] nums) {
        int max=nums[0];
        for(int i=0;i<nums.length;i++){
            if(nums[i]>max)
                max=nums[i];
        }
        int[] count=new int[max+1];
        for(int i=0;i<=max;i++)  count[i]=0;
        for(int i=0;i<nums.length;i++){
            count[nums[i]]++;
        }
        int[] b=new int[nums.length];
        for(int i=1;i<=max;i++){
            count[i]=count[i]+count[i-1];
        }
        for(int i=nums.length-1;i>=0;i--){
            b[--count[nums[i]]]=nums[i];
        }
        for(int i=0;i<nums.length;i++){
            nums[i]=b[i];
        }
    }
}