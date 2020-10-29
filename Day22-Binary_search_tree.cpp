

		int getHeight(Node* root){
          //Write your code here
            if(root == NULL)
                return -1;
            else{
                int left = getHeight(root->left);
                int right = getHeight(root->right);

                if(left > right)
                    return (left+1);
                else
                    return (right+1);
            }
        }

