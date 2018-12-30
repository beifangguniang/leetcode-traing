void moveZeroes(int* nums, int numsSize) {
    int z = 0;
    for(int i =0; i< numsSize; i++)
    {
        if(nums[i]!=0)
        {
            nums[z]= nums[i];
            z ++;
        }
    }
    while(z<numsSize)
    {
        nums[z++] = 0;
    }
    return nums;
}