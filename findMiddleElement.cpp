#include <bits/stdc++.h>
using namespace std;

ListNode* middleNode(ListNode* head) {
        /* first we will count how many nodes are present */
        ListNode * temp = head;
        int cnt = 0;
        while(temp!=NULL){
            ListNode * next = temp->next;
            temp = next;
            cnt++;
        }

        while(cnt--){
            ListNode* next = head->next;
            head = next;
        }
        return head;
    }