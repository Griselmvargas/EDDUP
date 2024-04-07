#include <stdio.h>
#include <stdlib.h>

void generarMatriz(int [][10],int);
void mostrarMatriz(int [][10],int);
void sumaElementos (int [][10],int, int);


int main ()

int MatrizA [10][10];
int dim, filasuma;

printf("Ingrese dimension: ");
scanf("%d",&dim);

generarMatriz(MatrizA,dim);
mostrarMatriz(MatrizA,dim);

printf("\nLos elementos de qué fila se van a sumar?: ");
scanf("%d", &filasuma);
sumaElementos(MatrizA,dim,filasuma);

}

void generarMatriz (int Matriz [][10],int dim)
{
int i,j, num;

for (i=0; i<dim ;i++)
{
    for (j=0; j<dim; j++)
    {
        printf ("Valor para Fila %d Col %d: ",i,j);
        scanf("%d", &Matriz[i][j]);
    } 
}
}

void mostrarMatriz (int Matriz [][10], int dim)
{
int i,j;

for (i=0; i<dim ;i++)
{
    printf("\n");
    for (j=0; j<dim; j++)
    {
        printf("%d\t",Matriz[i][j]);
    }
}

}

void sumaElementos (int Matriz [][10], int col, int filasuma)
{
    int j, sum=0;
    filasuma--;

        for (j=0; j<col; j++)
        {
            sum+=Matriz[filasuma][j];
        }
    printf("La suma de los elementos de la fila %d es %d",filasuma,sum);

}

