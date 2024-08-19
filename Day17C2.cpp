#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {3, 2, 1, 5, 2, 6, 7, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int freq[max + 1] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 1; i <= max; i++) {
        for (int j = i + 1; j <= max; j++) {
            if ((freq[j] > freq[i]) || (freq[j] == freq[i] && j < i)) {
                int tempFreq = freq[i];
                freq[i] = freq[j];
                freq[j] = tempFreq;
                int temp = i;
                i = j;
                j = temp;
            }
        }
    }
    cout << "Sorted array by frequency: ";
    for (int i = 1; i <= max; i++) {
        if (freq[i] > 0) {
            for (int j = 0; j < freq[i]; j++) {
                cout << i << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
