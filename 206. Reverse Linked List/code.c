/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* p=head;
    struct ListNode* New=NULL;  //����һ������ͷ
    if(head==NULL||head->next==NULL){
        return head;  //���ֻ��һ��������Ϊ�գ��򷵻�head
    }
    while(p!=NULL){   //һֱ��������β
     struct ListNode*temp;      //����һ����ʱ�����p->next������ֵ��ָ�����
        temp=p->next;           //temp���p->next�ĵ�ַ
        p->next=New;            //��pָ��New
        New=p;                  
        p=temp;
    }
    return New;
}