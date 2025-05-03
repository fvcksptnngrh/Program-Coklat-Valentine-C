#include <stdio.h>
#include <stdlib.h>

void main(){

    int menu;
    printf("_______________________\n");
    printf("|       MENU UTAMA    |\n");
    printf("|  PREPARE VALENTINE  |\n");
    printf("|_____________________|\n");


    printf("1. Beli Coklat\n");
    printf("2. Seberapa Besar Cintamu?\n");
    printf("3. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &menu);

    system("cls");
    switch(menu){
        case 1 : beli();
        case 2 : love();
        case 3 : selesai();
    }
}

void beli(){
    int coklat;
    printf("Ayo Beli Coklat Untuk Ayang\n\n");
    printf("Mau Beli Berapa :");
    scanf("%d", &coklat);

    if(coklat > 0 && coklat <= 5){
        printf("\nMasa belinya cuma segitu doang? :(");
    }
    else if(coklat > 5 && coklat <= 10){
        printf("\nkebanyakann nanti sakit gigi lohh");
    }
    if(coklat > 10){
        printf("\nUdah gak diragukan lagi rasa sayangmu itu ");
    }
    printf("\n\nPencet apa aja buat balik ke menu utama");

    getch();
    system("cls");
    main();
}

void love (){

	int A,b,lov;

	printf("Seberapa besar Cinta Mu? : ");
	scanf("%d",&lov);

	for(A=0;A<=lov;A++){
		for(b=lov;b>=0;b--){
			if(b<A){

			printf("  ");
		} else if (b==A){
			printf("-");
		}
			else
			printf("  ");
		}
		for(b=0;b<=A;b++){
			if( b==A && A<lov-b+1){
			printf("- ");}
	 		else if(  b == lov -A   ){
	 		printf("- ");
		 }
	else{
		printf("  ");
	}
}
		printf("\n");

	}
	for (A=1;A<=lov;A++){
		for(b=0;b<=lov;b++){
			if(A==b){
				printf("-");
			}
			printf("  ");
		}
		for(b=1;b<=A;b++){
			if( b==A && A<lov-b+1){
			printf("-");}
	 		else if(  b == lov -A   ){
	 		printf("-");
		 }
	else{
		printf(" ");
	}
	}
			printf("\n");
	}

    if(lov > 0 && lov <= 5){
        printf("\nKalo segini mah gampang terseleksi");
    }
    else if(lov > 5 && lov <= 10){
        printf("\nNahhh gini dongg");
    }
    if(lov> 10){
        printf("\nDiluar nalarrrr");
    }
    printf("\n\nPencet apa aja buat balik ke menu utama");

    getch();
    system("cls");
    main();
	}
void selesai(){
    printf("YAH KELUARR, SEE NEXT TIME!!!!!");
    exit(0);
}