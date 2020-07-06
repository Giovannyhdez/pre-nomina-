#include <stdio.h>
#include <stdlib.h>

int main()
{
	int menu;
    system ("color 8F");
    do{
	printf("escoje una de las opciones siguientes.\n1.empresa.\n2.trabajador.\n3.liquidacion,fecha de cobro y dias.\n4.devengos\n5.deducciones.\n6.liquido total a percibir\n7.firma y seño de la empresa\n8.base de cotizacion\n9.salir");
	scanf("%d",&menu);
	}while(menu>=9);
		
	switch(menu)
	{	
		case 0:
		    printf("/t/nomina!\n\n");
			break;
		case 1:
			printf("game planet,domicilio: av hidalgo 154,santanita,iztacalco,08300 cdmx");
			break;
		case 2:
			printf("olivier israel Hernandez sanchez,numero de matricula:12020435");
			break;
		case 3:
			printf("del 12 de abril al 30 de abril del 2018: total de dias trabajadas 29");
			break;
		case 4:
			printf("salario...2558.complemento de salario...618.horas extras...150.graficaciones extraudinario...95");
			break;
		case 5:
			printf("contigencias comunes 1.260,95,desempleo 1.260,95,formacion personal 1.260,95");
			break;
		case 6:
			printf("B.total a deducir....105,92"
			    "liquido tolal a percibir (A-B)");
			break;
		case 7:
			printf("firma y sello de la empresa ");
			break;
		case 8:
			printf("remuneracion mensual ..................1.890,95");
			break;
		case 9:
			printf("salir");
			break;											
				printf("sacar el total del de la opcion 4");
				scanf("%d",&menu);
		}
	return 0;
}
