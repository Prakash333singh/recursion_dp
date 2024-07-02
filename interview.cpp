#include <bits/stdc++.h>
using namespace std; // For time()

class RandomizedSet
{
private:
    std::vector<int> nums;                   // Dynamic array for storing elements
    std::unordered_map<int, int> valToIndex; // Hash table for storing element-to-index mappings

public:
    // Inserts a value to the set. Returns true if the set did not already contain the specified element.
    bool insert(int val)
    {
        if (valToIndex.find(val) != valToIndex.end())
        {
            return false; // Value already exists, do not insert
        }
        // Insert value at the end of the vector
        nums.push_back(val);
        // Record the index of the new element in the map
        valToIndex[val] = nums.size() - 1;
        return true;
    }

    bool remove(int val)
    {
        auto it = valToIndex.find(val);
        if (it == valToIndex.end())
            return false;

        int lastElement = nums.back();
        int idx = it->second;

        nums[idx] = lastElement;
        valToIndex[lastElement] = idx;

        nums.pop_back();
        valToIndex.erase(it);

        return true;
    }

    // Get a random element from the set.
    int getRandom()
    {
        if (nums.empty())
        {
            throw std::runtime_error("The set is empty");
        }
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};

// Example usage
int main()
{
    RandomizedSet randomizedSet;

    // Insert some values
    std::cout << "Insert 1: " << randomizedSet.insert(1) << std::endl;       // Returns true
    std::cout << "Insert 2: " << randomizedSet.insert(2) << std::endl;       // Returns true
    std::cout << "Insert 2 again: " << randomizedSet.insert(2) << std::endl; // Returns false

    // Remove a value
    std::cout << "Remove 1: " << randomizedSet.remove(1) << std::endl;       // Returns true
    std::cout << "Remove 1 again: " << randomizedSet.remove(1) << std::endl; // Returns false

    // Get a random value
    try
    {
        std::cout << "Random value: " << randomizedSet.getRandom() << std::endl; // Randomly returns 2
    }
    catch (const std::runtime_error &e)
    {
        std::cout << e.what() << std::endl; // Handle case where set is empty
    }

    return 0;
}
