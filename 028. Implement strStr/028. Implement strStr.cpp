//
// Created by cisco on 2019-04-24.
//

class Solution {
public:
    int strStr(string haystack, string needle) {
        const int l1 = haystack.length();
        const int l2 = needle.length();
        for (int i = 0; i <= l1 -l2; i++) {
            int j = 0;
            while (j < l2 && haystack[i + j] == needle[j])  j++;
            if (l2 == j)
                return i;
        }
        return -1;
    }
};

