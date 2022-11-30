class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        // Using Hashmap. define hashmap umap
        unordered_map<string, int> umap{
            {"--X", -1},
            {"X--", -1},
            {"X++", 1},
            {"++X", 1}
        };
        // define int temp
        int temp=0;

        // for size of vector operations
        for(int i=0; i<operations.size();i++)
        {
            // augment the temp, converted members using umap
            temp+=umap.at(operations[i]);
        }
        return temp;     
    }
};