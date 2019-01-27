int firstUniqChar(char* s) {
    int len = strlen(s);
    int a[26];
    memset(a,0,sizeof(int)*(26));
    for(int i=0;i<len;i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<len;i++){
        if(a[s[i]-'a']==1) return i;
    }
    return -1;
}