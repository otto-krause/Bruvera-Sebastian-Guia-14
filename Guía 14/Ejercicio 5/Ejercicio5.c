#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int matriz[101][4]={0}, nuev[3]={0}, I=0, J=0, cont=0, Q=0, cant=0, p=0;
    int prom[4]={0};

    for (I=1;I<=100;I++)
    {
        printf("Ingresar las 3 notas del alumno %d:\n", I);

        for (J=1;J<=3;J++)
        {
            printf("Trimestre %d: ", J);
            scanf("%d", &matriz[I][J]);
        }
        printf("\n");
    }

    system("cls");

    printf("Desea cambiar alguna nota? (Si=1|No=2): ");
    scanf("%d", &cont);

    if (cont==1)
    {

        printf("Cuantas notas desea cambiar?: ");
        scanf("%d", &cant);

        system("cls");

        for (Q=1;Q<=cant;Q++)
        {
            printf("Ingrese el alumno y el bimestre a cambiar\n");
            printf("Alumno nro: ");
            scanf("%d", &nuev[1]);
            printf("Trimestre nro: ");
            scanf("%d", &nuev[2]);

            nuev[0]=matriz[nuev[1]][nuev[2]];

            printf("Ingrese la nueva nota: ");
            scanf("%d", &matriz[nuev[1]][nuev[2]]);

            system("cls");

            printf("Esta seguro de cambiar la nota %d por la nota %d? (Si=1|No=2):\n", nuev[0], matriz[nuev[1]][nuev[2]]);
            scanf("%d", &cont);
            if (cont==1)
            {
                system("cls");
                continue;
            }
            else
            {
                matriz[nuev[1]][nuev[2]]=nuev[0];

                printf("Continuar? (1=Si|2=No): ");
                scanf("%d", &cont);
            }
            system("cls");
        }

        printf("N Legajo\tTrimestre 1\tTrimestre 2\tTrimestre 3\tPromedio\n");

        for (I=1;I<=100;I++)
        {
            prom[I]=(matriz[I][1]+matriz[I][2]+matriz[I][3])/3;

            printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n", I, matriz[I][1], matriz[I][2], matriz[I][3], prom[I]);
        }
    }

    else
    {
        system("cls");

        printf("N Legajo\tTrimestre 1\tTrimestre 2\tTrimestre 3\tPromedio\n");

        for (I=1;I<=100;I++)
        {
            prom[I]=(matriz[I][1]+matriz[I][2]+matriz[I][3])/3;

            printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n", I, matriz[I][1], matriz[I][2], matriz[I][3], prom[I]);
        }
    }
	return 0;
}
