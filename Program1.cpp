#include <iostream>
#include <unordered_set>
#include <vector>

void findPairsWithSum(const std::vector<int>& arr, int targetSum) {
    std::unordered_set<int> complementSet;
    
    for (int num : arr) {
        int complement = targetSum - num;
        
        if (complementSet.find(complement) != complementSet.end()) {
            std::cout << "Pair: " << num << " and " << complement << std::endl;
        }
        
        complementSet.insert(num);
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int targetSum = 7;
    findPairsWithSum(arr, targetSum);
    return 0;
}
