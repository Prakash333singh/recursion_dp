#include <bits\stdc++.h>
using namespace std;
// phele 1st element ko swap kardo last element se
// root node ko sahi position mai leke aauo by calling heapify
// 0(nlogn)
class heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val) //(log(n))
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void heapify(int arr[], int size, int index)
    {
        // oth base indexing
        int li = 2 * index + 1;
        int ri = 2 * index + 2;
        // int li = 2 * index;
        // int ri = 2 * index + 1;

        int largest = index;

        if (li < size && arr[largest] < arr[li])
            largest = li;

        if (ri < size && arr[largest] < arr[ri])
            largest = ri;

        if (largest != index)
        {
            swap(arr[largest], arr[index]);
            heapify(arr, size, largest);
        }
    }

    void heapSort(int arr[], int n)
    {
        int size = n;
        while (size > 1)
        {
            /*step 1 */
            swap(arr[size], arr[0]);
            size--;

            heapify(arr, size, 0);
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int arr[5] = {54, 53, 55, 52, 50};
    int n = 5;
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.heapSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}