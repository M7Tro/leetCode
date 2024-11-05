The concept of hashmap:

    if you store your data in a large array, it might take a long time to find what you are looking for because you need to iterate through the whole array. 

    is there a faster way? 

    Imagine you are looking for a word in a dictionaty. Would you start reading the dictionary page by page until you find the word you are looking for? Or would you rather find the section that corresponds to the first letter of your word? The latter one is faster. 

    Every item inside a hashtable (hashmap) gets a unique index (also called hash). An index is assigned to each item with a hash function. 

    

unordered_map<type1, type2>:

    Hash table implementation: internally, the given keys are hashed. The resulting hash values are used to determine the key-value pairs. 

    Hash table implementation allows unordered_map to achieve constant-time average-case performane for key-based operations like deletion, insertion and lookup. unordered_map is highly efficient if you need to access something with a key a lot.

    Unlike the map data structure that sorts its elements in a particular order based on keys, elements of the unordered_map are unordered.

    The keys within unordered_map are unique. If you try to insert a key already in use, existing value associated with the key will be overwritten. 

    unordered_map can automatically resize itself. 

vector<type>:

    Dynamic array. 

    Automatic memory management.

    Access elements through indexing. 

    Diverse operations: push_back, pop_back, size(), clear(), at() 

    Useful for data of unknown size. 