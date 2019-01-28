bool isAnagram(char* s, char* t) {
    int i;
    int num1[123]={0};
    int num2[123]={0};
    int s_len,t_len;
    s_len=strlen(s);
    t_len=strlen(t);
    if(s_len!=t_len) 
        return false;
    for(i=0;i<s_len;i++){
        num1[(int)s[i]]++;
        num2[(int)t[i]]++;
    }
    for(i=97;i<123;i++){
        if(num1[i]!=num2[i]) 
            return false;
    }
    return true;
}