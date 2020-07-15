#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include <windows.h>
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
main ()
{
	int op,i,stop;
	printf("\tARBOL GENEALOGICO\n\n\n");
	
	printf("1.- Primera generacion\n");
	printf("2.- Segunda generacion\n");
	printf("3.- Tercera generacion\n");
	printf("4.- Cuarta generacion\n");
	printf("5.- Quinta generacion\n");
	printf("6.- Sexta generacion\n");
	printf("SELECCIONE UNA OPCION\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			for (i=11;i<=13;i++)
			{
				gotoxy(8,i);printf("|");
				gotoxy(25,i);printf("|");
				gotoxy(45,i);printf("|");
				gotoxy(65,i);printf("|");
				gotoxy(83,i);printf("|");
			}
			for (i=8;i<=83;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			gotoxy(10,12);printf("Desconocido");
			gotoxy(30,12);printf("Desconocido");
			gotoxy(50,12);printf("Desconocido");
			gotoxy(70,12);printf("Desconocido");
			break;
			 case 2:
			 for (i=11;i<=13;i++)
			{
				gotoxy(8,i);printf("|");
				gotoxy(25,i);printf("|");
				gotoxy(45,i);printf("|");
				gotoxy(65,i);printf("|");
				gotoxy(83,i);printf("|");
			}
			for (i=8;i<=83;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			gotoxy(10,12);printf("Desconocido");
			gotoxy(30,12);printf("Desconocido");
			gotoxy(50,12);printf("Desconocido");
			gotoxy(70,12);printf("Desconocido");
			break;
			case 3:
				for (i=11;i<=13;i++)
			{
				gotoxy(8,i);printf("|");
				gotoxy(25,i);printf("|");
				gotoxy(45,i);printf("|");
				gotoxy(65,i);printf("|");
				gotoxy(83,i);printf("|");
			}
			for (i=8;i<=83;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			gotoxy(10,12);printf("Alvaro");
			gotoxy(30,12);printf("Sara");
			gotoxy(50,12);printf("Lorenzo");
			gotoxy(70,12);printf("Trinidad");
			break;
			case 4:
					for (i=11;i<=13;i++)
			{
				gotoxy(8,i);printf("|");
				gotoxy(25,i);printf("|");
				gotoxy(65,i);printf("|");
				gotoxy(83,i);printf("|");
			}
			for (i=8;i<=25;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			for (i=65;i<=83;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			gotoxy(12,12);printf("Jose Luis");
			gotoxy(70,12);printf("Veronica");
			break;
			case 5:
				for (i=11;i<=13;i++)
			{
				gotoxy(8,i);printf("|");
				gotoxy(25,i);printf("|");
				gotoxy(45,i);printf("|");
				gotoxy(65,i);printf("|");
			}
			for (i=8;i<=65;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			gotoxy(10,12);printf("Christian");
			gotoxy(30,12);printf("Jose Luis");
			gotoxy(50,12);printf("Ivette");
			break;
			case 6:
				for (i=11;i<=13;i++)
			{
				gotoxy(8,i);printf("|");
				gotoxy(25,i);printf("|");
				gotoxy(65,i);printf("|");
				gotoxy(83,i);printf("|");
			}
			for (i=8;i<=25;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			for (i=65;i<=83;i++)
			{
				gotoxy(i,11);printf("-");
				gotoxy(i,13);printf("-");
			}
			gotoxy(12,12);printf("Santino");
			gotoxy(70,12);printf("Luis Fer");
			break;
	}
	
	printf("\n\n\n\nGRACIAS POR USAR ESTE PROGRAMA PROPIEDAD DE LUIS GARCIA");
	return 0;
}
