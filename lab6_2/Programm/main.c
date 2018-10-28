#include <stdio.h> 
#include <conio.h> 
void main () 
{ 
int i,j,t,k,max=0,counter=0,n,m; 
int *b; 
printf("vveditr kokl-vo strok: ");
  scanf("%d", &n);
  printf("vvvedite kol-vo stolbcow: ");
  scanf("%d", &m);
  b = (int*)malloc(n*m * sizeof(int));
  
  for (i = 0; i<n; i++)  
  {
    for (j = 0; j<m; j++)  
    {
      printf("b[%d][%d] = ", i, j);
      scanf("%d", (b + i*m + j));
    }
  }
  for (i = 0; i<n; i++)  
  {
    for (j = 0; j<m; j++)  
    {
      printf("%5d ", *(b + i*m + j)); 
    }
    printf("\n");
  }
  
  
for(i = 0; i < n; ++i){ 
for(j = 0; j < n; ++j){ 
if(*(b+i+j) == 0){ 
counter++; break; 
} 
} 
} 
for (i=0;i < n; i++){
	for(i = 0; i < m; i++){
		for( m=0; m < n; m++){
			for( k = 0; k<m; k++){
				if(*(b+i+j) == *(b+m+k) && (1!=m) && (j!=k)){
				if(*(b+i+j)>max)	max = *(b+i+j);
				}
			}
			
		}
	}
}
printf("Number of rows with no zero elements: %d\n", n - counter); 
printf("Max povtoryaushciesy element matrici = %d\n", max);
}
