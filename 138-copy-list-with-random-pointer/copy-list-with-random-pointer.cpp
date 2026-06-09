class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }

        unordered_map<Node*, Node*> m;
        Node* newHead = new Node(head->val);
        
        // FIX 1: Map the head node right away
        m[head] = newHead; 
        
        Node* oldTemp = head->next;
        Node* newTemp = newHead;

        // Clone the next-pointer skeleton
        while(oldTemp != NULL){
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        
        oldTemp = head;
        newTemp = newHead;
        
        // Clone the random pointers
        while(oldTemp != NULL){
            // FIX 2: Explicitly handle NULL random pointers
            if (oldTemp->random != NULL) {
                newTemp->random = m[oldTemp->random];
            } else {
                newTemp->random = NULL;
            }
            
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        return newHead;
    }
};