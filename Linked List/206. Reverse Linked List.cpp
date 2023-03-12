struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x = 0, ListNode *next = nullptr) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head) {
    ListNode *cur_elem = head;
    ListNode *prev_elem = nullptr;
    while (cur_elem != nullptr) {
        ListNode *next_elem = cur_elem->next;
        cur_elem->next = prev_elem;
        prev_elem = cur_elem;
        cur_elem = next_elem;
    }
    return prev_elem;
}