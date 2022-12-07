#include <string>
class Solution {
public:
    string defangIPaddr(string address) {
        // regex_replace() //if you trying to do with ".", make it "[.]"
        return regex_replace(address, regex("[.]"), "[.]");
    }
};