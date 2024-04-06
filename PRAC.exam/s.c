//Q-2: Create a C Program to find largest element in an 1D Array.
#include <stdio.h>
int main() {
  int n;
  int arr[100];
  printf("Enter elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number:");
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i < n; i++) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Largest element is: %d", arr[0]);

  return 0;
}