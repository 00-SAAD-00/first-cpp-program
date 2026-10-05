#include <iostream>
using namespace std;
void Avg(int arr[], int n)// User-defined function 
{
    int sum = 0;
	float avg;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = (float)sum / n;
    cout << "\n\nSum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

int main()
{
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray values are: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    Avg(arr, n);
    
    return 0;
}