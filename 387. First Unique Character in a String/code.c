//
// Created by cisco on 2019-02-05.
//

int firstUniqChar(char* s) {
    // 定义了一数组但是没初始化和赋值
    int a[26];
    // memset 作用是将某一块内存中的内容全部设置为指定的值
    // 这个函数通常为新申请的内存做初始化工作
    // 将 a 中当前位置后面的 n 个字节 sizeof(int)*(26) 用 0 替换并返回 a
    memset(a, 0, sizeof(int)*(26));
    // 获取字符串 s 长度
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        // 假定该字符串只包含小写字母
        // 所以可以记录小写字母出现次数
        a[s[i]-'a']++;
    }

    for (int i =  0; i < len; i++) {
        if (a[s[i]-'a'] == 1)
            // 如果小写字母只出现一次表示为第一个唯一字符
            return i;
    }
    return -1;
}

