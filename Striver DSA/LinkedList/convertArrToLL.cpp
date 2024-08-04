// Creating a Node datatype that has data and a pointer(next)
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Converts an Array to a Linked List
// eg: arr = [1,2,3,4,5] becomes 1-->2-->3-->4-->5
// Where 1 is the head (this is returned)
class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1; i<arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
};
