class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //edge case
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp && temp->next){
            if(temp->val == temp->next->val){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
        }

        return head;
    }
};

Input:[1,1,2]
Output:[1,2]
