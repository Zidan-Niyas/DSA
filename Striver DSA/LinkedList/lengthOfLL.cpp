// NOTE : NEVER tamper with the head, always create a temp variable that holds the head value.
int getCount(struct Node* head) {
        int count = 0;
        Node* temp = head;
        while(temp != NULL) {
            temp = temp->next;
            count++;
        }
        return count;
    }
