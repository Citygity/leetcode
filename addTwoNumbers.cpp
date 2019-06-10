/**
 *leetcode 2
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {  
    ListNode *item1 = l1;
    ListNode *item2 = l2;
    ListNode *result;// = new ListNode(0);
    ListNode *item_result;// = result;
    bool carry = false;
    bool first_round = true;
    while (item1 != NULL && item2 != NULL) {
        int digit_sum = 0;
        int part_sum = item1->val + item2->val;
        if (carry) {
            digit_sum = (part_sum + 1) % 10;
            part_sum++;
        } else {
            digit_sum = part_sum % 10;
        }
        if (part_sum >=10)
            carry = true;
        else
            carry = false;
        item1 = item1->next;
        item2 = item2->next;
        if (first_round) {
            result = new ListNode(digit_sum);
            item_result = result;
            first_round = false;
        } else {
            item_result->next = new ListNode(digit_sum);
            item_result = item_result->next;
        }
    }
    ListNode* remained_node ;
    if (item1 != NULL)
        remained_node = item1;
    else
    if (item2 != NULL)
        remained_node = item2;
    else
        remained_node = NULL;
    while (carry)
    {
        if(remained_node==NULL)
        {
            item_result->next = new ListNode(1);
            carry = false;
        }
        else{
            int part_sum = remained_node->val+1;
            if (part_sum>=10)
                carry = true;
            else
                carry = false;
            item_result->next = new ListNode(part_sum%10);
            remained_node = remained_node->next;
            item_result = item_result->next;
        }
    }
    if (remained_node!=NULL)
        item_result->next = remained_node;

    return result;
    }
};
