/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;
    int* r = (int*)malloc((digitsSize+1)*sizeof(int));
    for(i=digitsSize-1;i>=0;i--)
    { 
        if(digits[i]<9) //判断进位
        {
            digits[i]=digits[i]+1; 
            break;
        }
        else //进位
        { 
            digits[i]=0; 
        }
    }
    if (digits[0]==0)  //增加数组长度
    { 
        int j;
        for(j=i;j<digitsSize+1;j++) 
            r[j]=0;
        r[0]=1;
        * returnSize=digitsSize+1;
        return r;
    }
    else  //不增加数组长度
    {
        * returnSize=digitsSize;
        return digits; 
    }
}