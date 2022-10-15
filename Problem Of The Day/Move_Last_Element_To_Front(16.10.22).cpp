//https://practice.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1
class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(!head || !head->next) return head;
        ListNode *temp = head;
        while(temp->next->next){
            temp=temp->next;
        }
        ListNode *temp2 = temp->next;
        temp->next = NULL;
        temp2->next = head;
        head= temp2;
        return head;
    }
};