#include <list>
#include <unordered_map>
using namespace std;

class LRUCache {
    int cap;
    list<pair<int, int>> cache; // Pair<key, value>
    unordered_map<int, list<pair<int, int>>::iterator> map; // Key to iterator in cache

public:
    LRUCache(int capacity) : cap(capacity) {
        
    }

    int get(int key) {
        if (map.find(key) == map.end()) return -1; // Key not found
        cache.splice(cache.begin(), cache, map[key]); // Move to front
        return map[key]->second; // Return value
    }

    void put(int key, int value) {
        if (map.find(key) != map.end()) {
            // Update existing
            cache.splice(cache.begin(), cache, map[key]);
            map[key]->second = value;
            return;
        }
        if (cache.size() == cap) {
            // Remove LRU
            auto lru = cache.back().first;
            cache.pop_back();
            map.erase(lru);
        }
        // Insert new
        cache.push_front(make_pair(key, value));
        map[key] = cache.begin();
    }
};