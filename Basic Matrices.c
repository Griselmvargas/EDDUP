#include <stdio.h>
#include <stdlib.h>

void generarMatriz(int [][10],int);//Para prototipo y función solo es mandatorio la columna
void mostrarMatriz(int [][10],int);
void sumaElementos (int [][10],int, int);
//void (int [][10],int,int);
//void (int [][10],int,int);
//void (int [][10],int,int);
//void (int [][10],int,int);


int main ()//INICIO DE PROGRAMA - INICIO DE PROGRAMA - INICIO DE PROGRAMA - INICIO DE PROGRAMA -
{

int MatrizA [10][10];//Se debe definir las dos dimensiones cuando se lo declara
int dim, filasuma;

printf("Ingrese dimension: ");//Solo trabajaremos con matrices cuadradas
scanf("%d",&dim);

generarMatriz(MatrizA,dim);
mostrarMatriz(MatrizA,dim);

printf("\nLos elementos de qué fila se van a sumar?: ");
scanf("%d", &filasuma);
sumaElementos(MatrizA,dim,filasuma);
//mostrarMatriz(MatrizA,filas,cols);

}//FIN DE PROGRAMA - FIN DE PROGRAMA - FIN DE PROGRAMA - FIN DE PROGRAMA - FIN DE PROGRAMA - 


void generarMatriz (int Matriz [][10],int dim)
{
int i,j, num;

for (i=0; i<dim ;i++)//Tope dado por cantidad de filas. Cada DIM elementos, cambia la fila
{
    for (j=0; j<dim; j++)//Tope dado por cantidad de columnas. Fila 0 y camino por las columnas.
    {
        printf ("Valor para Fila %d Col %d: ",i,j);
        scanf("%d", &Matriz[i][j]);//SE PARA EN LA PRIMERA FILA, RECORRE LAS COLUMNAS
    } 
}
}

void mostrarMatriz (int Matriz [][10], int dim)
{
int i,j;

for (i=0; i<dim ;i++)//Tope dado por cantidad de filas
{
    printf("\n");//Linea nueva entre fila y fila
    for (j=0; j<dim; j++)//Tope dado por cantidad de columnas
    {
        printf("%d\t",Matriz[i][j]);//SE PARA EN LA PRIMERA FILA, RECORRE LAS COLUMNAS

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

