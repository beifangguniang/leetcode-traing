bool containsDuplicate(int* nums, int numsSize){
    int i,j;
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i] == nums[j])
                return true;
        }
    } 
    return false;  
}