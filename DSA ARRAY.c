
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 🔹 Traversal
    printf("\nArray Traversal:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 🔹 Insertion
    printf("\n\nEnter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;

    printf("After Insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 🔹 Deletion
    printf("\n\nEnter position to delete (0 to %d): ", n-1);
    scanf("%d", &pos);

    for(i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    printf("After Deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 🔹 Updating
    printf("\n\nEnter position to update (0 to %d): ", n-1);
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &value);

    arr[pos] = value;

    printf("After Updating:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
