int firstUniqChar(char* s) {
    int len = strlen(s);  //��ȡ�ַ�������
    if(len == 1)   //����Ϊ1ʱ
        return 0;  //��������0
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if((i != j) && (s[i] == s[j])) //�������Լ�����������ȵ�ֵ�����������жϵڶ���ֵ
                break;
            else if(j == len - 1){//�������ȵ�ֵ���򷵻ظ�ֵ������
                return i;
            }
        }
    }
    return -1;  //�������ֵ������ȣ��򷵻�-1
}
