#include"glowa.h"
void II(){

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

    /*==================deklaruje wektor Y=====================*/
    int M;
    printf("Ilu elementowy jest wektor Y? ");
    cin>>M;
    int *wektory=new int[M];
    if (M==0)
        {
        printf(" 0? plz... \n");
        }
    else{
        printf("Wprowadü wektor Y: ");
        for (int i=0; i<M; i++)
            {
            cin>>wektory[i];
            }}

   /*================deklaruje Z ktory jest suma X i Y===================*/
   int P;
   if(M>N)
        P=M;
   else
        P=N;
   int *wektorz=new int[P];

    /* ========zamieniam niezdefiniowane wartosci na 0=========*/
            if(M>N){
                int i=M-1; //wprowadzam zmienna lokalna zeby nie zmieniac M
                    for(i;i>=N;i--)
                    wektorx[i]=0;}
            else if(N>M){
            int j=N-1; //wprowadzam zmienna lokalna zeby nie zmieniac N
                    for(j;j>=M;j--)
                    wektory[j]=0;}

    /*=====================suma X i Y========================*/
    for(int i=0;i<P;i++)
    wektorz[i]=wektory[i]+wektorx[i];

   /* ===Pokaø wektor X===*/
        printf("\n========================================\n [");
        for (int i=0; i<N; i++)
                {
                printf(" %d ",wektorx[i]);
                }
                printf("]   <--- wektor X");

   /* ===Pokaø wektor Y===*/
        printf("\n+[");
        for (int i=0; i<M; i++)
                {
                printf(" %d ",wektory[i]);
                }
                printf("]   <--- wektor Y");

    /* ===Pokaø wektor Z===*/
        printf("\n=[");
        for (int i=0; i<P; i++)
                {
                printf(" %d ",wektorz[i]);
                }
                printf("]   <--- wektor Z=X+Y");


				delete[] wektorx;
				delete[] wektory;	///zwalniam pamiec ziom
				delete[] wektorz;

							system("PAUSE");
							system("CLS");
							main();
}
