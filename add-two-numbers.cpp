/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int gewei=0,shiwei=0;
        ListNode* L1=new ListNode;
        ListNode *L=L1;
        while(l1&&l2){
            ListNode* p=new ListNode;
            gewei=(l1->val+l2->val+shiwei)%10;
            shiwei=(l1->val+l2->val+shiwei)/10;
            p->val=gewei;
            p->next=L->next;
            L->next=p;
            L=L->next;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1==NULL){
            
            while(l2){
            ListNode* p=new ListNode;
            
            gewei=(l2->val+shiwei)%10;
            shiwei=(l2->val+shiwei)/10;
            p->val=gewei;
            p->next=L->next;
            l2=l2->next;
            L->next=p;
            L=L->next;
            }
        }
        if(l2==NULL){
            while(l1){
            ListNode* p=new ListNode;
            gewei=(l1->val+shiwei)%10;
            shiwei=(l1->val+shiwei)/10;
            p->val=gewei;
            p->next=L->next;
            l1=l1->next;

            L->next=p;
            L=L->next;
            }
        }
        if(shiwei==1){
            ListNode* p=new ListNode;
            gewei=shiwei%10;
            p->val=gewei;
            p->next=L->next;
            L->next=p;
            L=L->next;
        }
        
        return L1->next;
    }
};
