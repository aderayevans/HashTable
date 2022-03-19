class MyHashSet {
    vector<vector<int>> data;
    int size = 10000;
public:
    MyHashSet() {
        data.resize(size);
    }
    
    void add(int key) {
        int index = key % size;
        
        vector<int>& row = data[index];
        for (auto iter = row.begin(); iter != row.end(); iter++)
        {
            if (*iter == key)
                return;
        }
        row.push_back(key);
    }
    
    void remove(int key) {
        int index = key % size;
        
        vector<int>& row = data[index];
        for (auto iter = row.begin(); iter != row.end(); iter++)
        {
            if (*iter == key)
            {
                row.erase(iter);
                return;
            }
            
        }
    }
    
    bool contains(int key) {
        int index = key % size;
        
        vector<int>& row = data[index];
        for (auto iter = row.begin(); iter != row.end(); iter++)
        {
            if (*iter == key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
