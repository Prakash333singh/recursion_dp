#include <iostream>
#include <vector>
using namespace std;

// This algorithm works by first organizing the data into a max heap, and then swapping the top element (the max) with
// the last element, decreasing the heap size by one, and finally heapifying the root again. Repeat these steps until
// the heap size is one, and voila, your array is sorted!

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(vector<int> &arr)
{
    int n = arr.size();

    // This loop is responsible for building a max heap from the given array. In a max heap, every parent node is greater
    // than or equal to its children. It starts from the middle of the array and iterates backwards to the first element (index 0).
    // This is because starting from the middle allows us to work directly with non-leaf nodes,
    // and iterating in reverse ensures that the heap property is maintained as we perform the heapify operation.

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    heapsort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}


