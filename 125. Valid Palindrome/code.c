bool isPalindrome(char* s) {
    int len = strlen(s);
    int j = 0;
    char array[len + 1];
    /* ��ԭ�ַ����е���ĸ�����ֿ��������ַ�����������ת����Сд��ĸ */
    for(int i = 0; i < len; i++){
        if(isalnum(s[i])){
            array[j] = tolower(s[i]);
            j++;
        }
    }
    array[j] = '\0';
    /* ��ȡ���ַ������� */
    len = strlen(array);
    /* �ж��Ƿ���� */
    for(int i = 0; i < len/2; i++){
        if(array[i] != array[len - i - 1])
            return false;
    }
    return true;
}