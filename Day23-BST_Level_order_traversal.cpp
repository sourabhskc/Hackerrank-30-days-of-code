

	void levelOrder(Node * root){
      //Write your code here
        if(root == NULL)
            return;

        queue<Node*> Q;
        Q.push(root);

        while(!Q.empty()){
            Node* current = Q.front();

            cout<<current->data<<" ";

            if(current->left != NULL)
                Q.push(current->left);

            if(current->right != NULL)
                Q.push(current->right);

            Q.pop();
        }
  
	}

