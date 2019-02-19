void moveZeroes(int* nums, int numsSize) {
    int tempSize = 0;  //目前已经加入多少个数字
    //把nums中不是0的依序插入在temp阵列中
    for (int i = 0; i < numsSize; i++ ){
        if (nums[i] !=0){
            nums[tempSize] = nums[i];
            tempSize++;    
        }  
    }
    // 将剩下的元素全部填成 0
    while (tempSize < numsSize){
        nums[tempSize] = 0;
        tempSize++;
    }
}
