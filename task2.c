#include<stdio.h>
#include<math.h>

int detnt( int matrix[10][10], int n);

void main()
{
    int A[10][10],At[10][10],B[10][10],Bt[10][10],C[10][10],i,j,k,m1,n1,m2,n2,sum=0,sum1=0,sum2=0,ele1,ele2;
    float norm1,norm2;
    printf("Enter order of array 1:\n");
    scanf("%d %d",&m1,&n1);
    printf("Enter order of array 2:\n");
    scanf("%d %d",&m2,&n2);
    printf("Enter elements of array 1:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                scanf("%d",&ele1);
                A[i][j]=ele1;
                At[j][i]=ele1;
                sum1=sum1+pow(ele1,2);
            }
        }
        norm1=sqrt(sum1);
        printf("Enter elements of array 2:\n");
        for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
            {
                scanf("%d",&ele2);
                B[i][j]=ele2;
                Bt[j][i]=ele2;
                sum2=sum2+pow(ele2,2);
            }
        }
        norm2=sqrt(sum2);
    printf("Array1 is:\n");
    for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                printf("%d\t",A[i][j]);
             printf("\n");
        }
        printf("Transpose of array 1 is:\n");
         for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                printf("%d\t",At[i][j]);
            printf("\n");
        }
        printf("Array2 is:\n");
    for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
                printf("%d\t",B[i][j]);
            printf("\n");
        }
        printf("Transpose of array 2 is:\n");
         for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
                printf("%d\t",Bt[i][j]);
            printf("\n");
        }
        printf("Norm of array 1 is:%f\n",norm1);
        printf("Norm of array 2 is:%f\n",norm2);
    if(n1!=m2)
        printf("Matrix multiplication not possible!!\n");
    else
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                for(k=0;k<n1;k++)
                   sum=sum+A[i][k]* B[k][j];
                C[i][j]=sum;
                sum=0;
            }
        }
    }
      printf("Multiplication of array 1 and 2 gives:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
                printf("%d\t",C[i][j]);
            printf("\n");
        }
    if(m1!=n2)
        printf("Product Matrix is not square hence determinant cannot be found!!\n");
    else
        detnt(C,m1);
}

int detnt( int matrix[10][10], int n)
{
   int det = 0;
   int submatrix[10][10];
   if (n == 2)
      return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else
   {
      for (int x = 0; x < n; x++)
        {
            int subi = 0;
            for (int i = 1; i < n; i++)
                {
               int subj = 0;
               for (int j = 0; j < n; j++)
                {
                  if (j == x)
                  continue;
                  submatrix[subi][subj] = matrix[i][j];
                  subj++;
               }
               subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * detnt( submatrix, n - 1 ));
      }
   }
   printf("Determinant of the Product matrix is:%d\n ",det);
   return det;
}

