int height(struct Node* node)
{
    
    int max(int a, int b) {
        return a > b ? a : b;
    }
    
    if (node == NULL){
        return 0;
    }
    
    int left = height(node -> left);
    int right = height(node -> right);
    
    int ans = max(left , right) + 1;
    
    return ans;
}
