struct Node{
private:
    Node* links[2];
public:
    Node(){
        links[0] = links[1] = NULL;
    }
    
    bool containsKey(int bit){
		return (links[bit] != NULL);
    }
    
    Node* get(int bit){
        return links[bit];
    }
    
    void put(int bit,Node* new_node){
        links[bit] = new_node;
    }
};

class Trie{
private:
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    
    void insert(int num){
        Node* node = this->root;
        for(int i=31;i>=0;i--){
            // check bit is set or not
            int bit = ((1 << i)&num) ? 1 : 0;
            if(!node->containsKey(bit)){
                node->put(bit,new Node());
            }
            node = node->get(bit);
        }
    }
    
    int getMax(int num){
        Node* node = this->root;
        int max = 0;
        for(int i=31;i>=0;i--)
        {
            int bit = ((1 << i)&num) ? 1 : 0;
            if(node->containsKey(1-bit)){
                max = ((1 << i) | max);
                node = node->get(1-bit);
            }else{
                node = node->get(bit);
            }
        }
        return max;
    }
    
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie trie;
        for(auto& val:nums){
            trie.insert(val);
        }
        int ans = 0;
        for(auto& val:nums){
            ans = max(ans,trie.getMax(val));
        }
        return ans;
    }
};