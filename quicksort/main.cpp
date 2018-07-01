#include <iostream>

using namespace std;
void quickSort(int arr[], int left, int right) {
����� int i = left, j = right;
����� int tmp;
����� int pivot = arr[(left + right) / 2];
�
����� /* partition */
����� while (i <= j) {
����������� while (arr[i] < pivot)
����������������� i++;
����������� while (arr[j] > pivot)
����������������� j--;
����������� if (i <= j) {
����������������� tmp = arr[i];
����������������� arr[i] = arr[j];
����������������� arr[j] = tmp;
����������������� i++;
����������������� j--;
����������� }
����� };
�
����� /* recursion */
����� if (left < j)
����������� quickSort(arr, left, j);
����� if (i < right)
����������� quickSort(arr, i, right);
}
int main()
{
   int v[]={1,3,2,6,48,23,15,8,56,23,44}
   quickSort(v,0,11)

    return 0;
}