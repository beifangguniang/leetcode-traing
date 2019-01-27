int firstUniqChar(char* s) {
    int len = strlen(s);  //获取字符串长度
    if(len == 1)   //长度为1时
        return 0;  //返回索引0
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if((i != j) && (s[i] == s[j])) //除了它自己本身，如有相等的值，就跳出来判断第二个值
                break;
            else if(j == len - 1){//如果有相等的值，则返回该值的索引
                return i;
            }
        }
    }
    return -1;  //如果所有值都不相等，则返回-1
}
