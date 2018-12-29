int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[j]==target-nums[i]){
                nums[0]=i;
                nums[1]=j;
                return nums;
            }
        }
    }
    return nums;
}
