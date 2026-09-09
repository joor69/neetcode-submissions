class MyHashMap {
    vector<int> MyMap;
public:
    MyHashMap() {
        MyMap.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        MyMap[key]=value;
    }
    
    int get(int key) {
        return MyMap[key];
    }
    
    void remove(int key) {
        MyMap[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */