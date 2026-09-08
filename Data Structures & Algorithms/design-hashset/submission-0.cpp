class MyHashSet 
{
    vector<bool> MySet;
public:
    MyHashSet() 
    {
        MySet.resize(1000001);
    }
    
    void add(int key) 
    {
       MySet[key]=true;
    }
    
    void remove(int key) 
    {
        MySet[key]=false; 
    }
    
    bool contains(int key) 
    {
        return MySet[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */