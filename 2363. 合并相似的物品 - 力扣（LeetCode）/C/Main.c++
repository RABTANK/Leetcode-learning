#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> map;
        // 合并 items1 和 items2 的数据
        for (const auto& item : items1) {
            map[item[0]] += item[1];
        }
        for (const auto& item : items2) {
            map[item[0]] += item[1];
        }
        // 创建结果列表
        vector<vector<int>> result;
        // 遍历 map 并将每个键值对转换为列表
        for (const auto& entry : map) {
            result.push_back({entry.first, entry.second});
        }
        return result;
    }
};
int main(){
    return 0;
}