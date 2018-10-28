#include<iostream>
int main()
{

int size = -1;
printf("Enter count elements N = ");
scanf("%d", &size);

int* A = new int[size];
for (int i = 0; i < size; i++)
{
printf("Enter A[%d] = ", i); scanf("%d", &A[i]);
}

printf("\n");

int max = 0;
for (int n = 0; n < size; n++)
if (A[n] > A[max]) max = n;

int k = 0, *pos = new int[2];
for (int r = 0; (r < size) && (k != 2); r++)
if (A[r] == 0) pos[k++] = r;

int q = pos[0] + 1, sum = 0;
while (q < pos[1]) sum += A[q++];

for (int z1 = 0; z1 < size; z1++)
printf("%d ", A[z1]);
printf("\n");

printf("Max element: A[%d] = %d\n", max, A[max]);
printf("Sum elements: ");
for (int z2 = pos[0] + 1; z2 < pos[1]; z2++)
printf("%d ", A[z2]);
printf("Sum = %d\n", sum);
printf("Number the last elements: ", size);
delete[]A;
system("pause");
} 
