#include "Ejercicio02.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    std::unordered_map<std::string, std::vector<std::string>> map;
    for (std::string& str : strings) {
        std::string key = str;
        std::sort(key.begin(), key.end());
        map[key].push_back(str);
    }

    auto* result = new std::vector<std::vector<std::string>>;
    for (auto& pair : map) {
        result->push_back(pair.second);
    }

    return result;
}
