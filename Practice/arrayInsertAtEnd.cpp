#include <iostream>
void insertAtEnd(int arr[], int sizeOfArray, int element)
{
    arr[sizeOfArray - 1] = element;
}
int main()
{
    int sizeOfArray(0), iter(0), element(0);
    std::cin >> sizeOfArray;
    int arr[sizeOfArray];
    for (iter = 0; iter < sizeOfArray - 1; iter++)
    {
        std::cin >> arr[iter];
    }
    std::cin >> element;
    insertAtEnd(arr, sizeOfArray, element);
    for (iter = 0; iter < sizeOfArray; iter++)
    {
        std::cout << arr[iter];
    }
    return 0;
}