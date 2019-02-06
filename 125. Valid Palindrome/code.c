//
// Created by cisco on 2019-02-06.
//

int toLower(int c) {
    // 大写转小写
    if ((c >= 'A') && (c <= 'Z'))
        return c + ('a' - 'A');
    return c;
}

bool isChar(char c) {
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
        return true;
    }

    if ('0' <= c && c <= '9') {
        return true;
    }

    return false;
}


bool isPalindrome(char* s) {
    int len = strlen(s);
    int j = 0;
    char array[len + 1];
    /* 将原字符串中的字母和数字拷贝到新字符串，并将其转换成小写字母 */
    for(int i = 0; i < len; i++){
        if(isChar(s[i])){
            array[j] = toLower(s[i]);
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