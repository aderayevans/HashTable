class MyHashMap {
    vector<vector<pair<int,int>>> data;
    int size = 10000;
public:
    MyHashMap() {
        data.resize(size);
    }
    
    void put(int key, int value) {
        int index = key % size;
        vector<pair<int, int>> &row = data[index];
        // If the key already exists in the map, update the corresponding value
        for (auto iter = row.begin(); iter != row.end(); iter++)
        {
            if (iter->first == key)
            {
                iter->second = value;
                return;
            }
        }
        
        row.push_back(make_pair(key, value));
    }
    
    int get(int key) {
        int index = key % size;
        vector<pair<int, int>> &row = data[index];
        
        for (auto iter = row.begin(); iter != row.end(); iter++)
        {
            if (iter->first == key)
            {
                return iter->second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key % size;
        vector<pair<int, int>> &row = data[index];
        
        for (auto iter = row.begin(); iter != row.end(); iter++)
        {
            if (iter->first == key)
			{
				row.erase(iter);
                return;
			}
        }
    }
};
