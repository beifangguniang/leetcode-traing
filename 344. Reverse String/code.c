void reverseString(char* s, int sSize ) {
    int i=0,j=sSize-1;  //定义两个指针
    while(i<j){
        char tmp = s[i];
        s[i] = s[j];  //交换元素
        s[j] = tmp;
        i++;
        j--;
    }
}