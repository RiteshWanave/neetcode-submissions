class MyHashSet {
private:
    int arr[3126]{0};
 
public:
    MyHashSet() {              
    }
    
    void add(int key) {
        int num = key/32;
        int pos = key%32;
        arr[num] |= (1 << pos);       
    }
    
    void remove(int key) {
        int num = key/32;
        int pos = key%32;
        arr[num] &= ~(1 << pos);        
    }
    
    bool contains(int key) {
        int num = key/32;
        int pos = key%32;
        bool ans = arr[num] & (1 << pos);
        return ans;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */