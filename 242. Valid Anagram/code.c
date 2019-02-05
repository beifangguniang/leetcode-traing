//
// Created by cisco on 2019-02-05.
//


bool isAnagram(char* s, char* t) {
    // 定义了一数组但是没初始化和赋值
    int a[26];
    int b[26];
    // memset 作用是将某一块内存中的内容全部设置为指定的值
    // 这个函数通常为新申请的内存做初始化工作
    // 将 a 中当前位置后面的 n 个字节 sizeof(int)*(26) 用 0 替换并返回 a
    memset(a, 0 , sizeof(int)*26);
    memset(b, 0 , sizeof(int)*26);
    // 获取字符串 s 长度
    int len_s = strlen(s);
    // 获取字符串 t 长度
    int len_t = strlen(t);
    for (int i = 0; i < len_s; i++) {
        a[s[i]-'a'] ++;
    }

    for (int i = 0; i < len_t; i++) {
        b[t[i]-'a']++;
    }

    for (int i =0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}