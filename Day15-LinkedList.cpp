
Node* insert(Node *head,int data)
{
    Node *newnode, *temp;
  //  newnode = (struct Node*)malloc(sizeof(struct Node));
    
    newnode = new Node(data);

    newnode->data = data;
    newnode->next = NULL;

    // if head is NULL, means it is empty 
    // so first we have to create head node, by assigning first node 
    if(head == NULL){
        head = newnode;
    }
    else{
        temp = head;

        while(temp->next != 0){
            temp = temp->next;
        }
        temp->next = newnode;
    }

    return head;
}

     

