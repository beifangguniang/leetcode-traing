int reverse(int x) {
    int num = 0;
    while(x)
    {
        //记录num改变之前的值并用已改变的数来逆向推断是否相等，不等于说明是溢出了，返回0
        int temp = num*10 + x%10;
        if(temp/10 != num)       
        {
            return 0;
        }
        x = x/10;
        num = temp;
    }
    return num;
}