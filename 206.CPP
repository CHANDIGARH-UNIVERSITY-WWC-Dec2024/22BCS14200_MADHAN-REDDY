class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = nullptr;
        ListNode* next = nullptr; 
        ListNode* curr = head;    

    while (curr != nullptr) {
           next = curr->next;

            curr->next = prev;

            prev = curr; 
            curr = next; 
        }

        return prev;
    }
};

Input:[1,2,3,4,5]
Output:[5,4,3,2,1]
