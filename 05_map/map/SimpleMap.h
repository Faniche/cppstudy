//
// Created by chiry on 25/2/2020.
//

#ifndef INC_05_MAP_SIMPLEMAP_H
#define INC_05_MAP_SIMPLEMAP_H

#include <vector>

template<typename Key, typename Value>
class SimpleMap {
public:
    SimpleMap();

    virtual ~SimpleMap();

    Value get(const Key &key) const;

    void put(const Key &key, const Value & value);

private:
    struct KeyValuePair {
        Key key;
        Value value;
    };

    /* Instance variables */
    std::vector<KeyValuePair> bindings;

    /* Private functions prototypes.*/
    int findKey(const Key &key) const;

};

template<typename Key, typename Value>
SimpleMap<Key, Value>::SimpleMap() {

}

template<typename Key, typename Value>
SimpleMap<Key, Value>::~SimpleMap() {

}

template<typename Key, typename Value>
Value SimpleMap<Key, Value>::get(const Key &key) const {
    int index = findKey(key);
    return (index == -1) ? "" : bindings[index].value;
}

template<typename Key, typename Value>
void SimpleMap<Key, Value>::put(const Key &key, const Value & value) {
    int index = findKey(key);
    if (index == -1) {
//        KeyValuePair entry = {key, value};
        KeyValuePair entry;
        entry.key = key;
        index = bindings.size();
        bindings.push_back(entry);
    }
    bindings[index].value = value;
}


template<typename Key, typename Value>
int SimpleMap<Key, Value>::findKey(const Key &key) const {
    for (int i = 0; i < bindings.size(); ++i) {
        if (bindings[i].key == key) return i;
    }
    return -1;
}

#endif //INC_05_MAP_SIMPLEMAP_H
