int reverse(int x) {
    int num = 0;
    while(x)
    {
        //��¼num�ı�֮ǰ��ֵ�����Ѹı�����������ƶ��Ƿ���ȣ�������˵��������ˣ�����0
        int temp = num*10 + x%10;
        if(temp/10 != num)       
        {
            return 0;
        }
        x = x/10;
        num = temp;
    }
    return num;
}