#include <stdio.h>
#include <stdlib.h>



int main()
 {int arr[3][3];
 int i,j;
 printf("\nInput elements in matrix\n");
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			printf("element-[%d],[%d]:",i,j);
 			scanf("%d",(*(arr+i)+j));


		 }

	 }
	 printf("\n\nthe matrix is:");
	 for(i=0;i<3;i++)
	 {
	 	printf("\n");
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d\t",*(*(arr+i)+j));
		 }

	 }


	return 0;
}
