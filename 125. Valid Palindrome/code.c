bool isPalindrome(char* s) {
    int len = strlen(s);
    int j = 0;
    char array[len + 1];
    /* 将原字符串中的字母和数字拷贝到新字符串，并将其转换成小写字母 */
    for(int i = 0; i < len; i++){
        if(isalnum(s[i])){
            array[j] = tolower(s[i]);
            j++;
        }
    }
    array[j] = '\0';
    /* 获取新字符串长度 */
    len = strlen(array);
    /* 判断是否回文 */
    for(int i = 0; i < len/2; i++){
        if(array[i] != array[len - i - 1])
            return false;
    }
    return true;
}