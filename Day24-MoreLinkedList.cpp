

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node *temp;
            temp = head;

            while(temp->next != nullptr){
                if(temp->data == temp->next->data){
                    temp->next = temp->next->next;
                }
                else{
                    temp = temp->next;
                }
            }
            return head;
          }

