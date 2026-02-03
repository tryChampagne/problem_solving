class MyHashMap {
public:
    forward_list<pair<int,int>> sll;

    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        auto it=sll.begin();
        for(; it != sll.end(); it++){
            if(it->first == key){
                it->second =value;
                break;
            }
        }

        if(it == sll.end()) sll.push_front({key,value});
    }
    
    int get(int key) {
        int value =-1;
        
        for(auto it =sll.begin(); it != sll.end(); it++){
            if(it->first == key){
                value =it->second;
                break;
            }
        }

        return value;
    }
    
    void remove(int key) {
        auto prev =sll.before_begin();

        for(auto it =sll.begin(); it != sll.end(); it++){
            if(it->first == key) break;
            else    prev =it;
        }

        //Empty list
        if(next(prev) != sll.end()) sll.erase_after(prev);
    }
};
