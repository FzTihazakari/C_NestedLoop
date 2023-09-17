#include <stdio.h>

const int id = 5;
const int months = 3;
int i, j;
int main()
{
  int sales[id][months], totalsales;
  printf("\nEnter your sales in first 3 months in 2016 based on dropship ID\n\n");

  // Using nested loop to store values in a 2d array
  for (i = 0; i < id; ++i)
  {
    for (j = 0; j < months; ++j)
    {
      printf("Dropship ID >> DC%d, Month %d: ", i + 1, j + 1);
      scanf("%d", &sales[i][j]);
      
    }
  }
  printf("\nSales for all 5 dropships for the first 3 months in 2016: \n\n");

  // Using nested loop to display vlues of a 2d array
  for (i = 0; i < id; ++i)
  {
    for (j = 0; j < months; ++j)
    {
      printf("DC %d, Month %d = RM%d\n", i + 1, j + 1, sales[i][j]);
    }
  }

for(i=0;i<id;i++)   
    {
        int totalrow=0;
        
        for(j=0;j<months;j++)
        {
            totalrow=totalrow+sales[i][j];
        }
        printf("\nTotal sales in 3 months for DC%d is RM%d",i+1,totalrow);
    
        
        totalsales+=totalrow;
    }
	
	    printf("\nTotal sales for all dropships : RM%d", totalsales);
  return 0;
}
