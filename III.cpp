#include"glowa.h"
void III(){

    /*==================deklaruje wektor X=====================*/
    int N;
     
    printf("Ilu elementowy jest wektor X? ");
    cin>>N;
    int *wektorx=new int[N];
    if (N==0)
        {
        printf(" 0? plz... \n");
        
        }
    else{
        printf("Wprowadü wektor X: ");
        for (int i=0; i<N; i++)
            {
            cin>>wektorx[i];
            }}
    /* ===================== stala a ==========================*/
    int a;
    printf("\nWprowadz liczbe przez ktora mnozyc wektor X:");
    cin>>a;



     /* ===Pokaø wektor X===*/
        printf("\n\n[");
        for (int i=0; i<N; i++)
                {
                printf(" %d ",wektorx[i]);
                }
                printf("] x %d",a);



    /*======================mnozenie========================*/
    for(int i=0; i<N;i++)
    wektorx[i]=a*wektorx[i];


      /* ===Pokaø wektor X===*/
        printf(" = [");
        for (int i=0; i<N; i++)
                {
                printf(" %d ",wektorx[i]);
                }
                printf("]");

			delete [] wektorx; //zwalniam pamiec

						system("PAUSE");
						system("CLS");
						main();
}
