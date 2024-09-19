#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void bubbleSort(vector<T> &vec)
{
    int n = vec.size();
    bool swapped;

    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                // Swap vec[j] and vec[j + 1]
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }

        // If no swaps were made, the array is already sorted
        if (!swapped)
            break;
    }
}

template <typename T>
void printVector(const vector<T> &vec)
{
    for (const T &elem : vec)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    // Call the bubble sort function
    bubbleSort(numbers);

    // Print the sorted vector
    cout << "Sorted numbers: ";
    printVector(numbers);

    return 0;
}
