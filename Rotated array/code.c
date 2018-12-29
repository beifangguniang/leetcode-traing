void rotate(int* nums, int numsSize, int k) {
    int i,j; 
    int temp; 
    /* Ñ­»·ÒÆÎ» */ 
     for(j = 0; j < k; j++) { 
        temp = nums[0]; 
        for(i = numsSize - 1; i >= 0; i--) { 
            if(i == numsSize - 1) 
                nums[0] = nums[i]; 
            else nums[i + 1] = nums[i]; 
        } 
        nums[1] = temp; 
    }  
}