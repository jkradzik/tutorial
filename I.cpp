#include"glowa.h"



void I(){

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

    /*==================definiuje wektor Y=====================*/
    int M;
   
    printf("\nIlu elementowy jest wektor Y? ");
    cin>>M;
    if (M==0)
        {printf("0? plz...");
        
        }
	int *wektory=new int[M];

      /* ===Pokaø wektor X===*/
        printf("wektor X=[");
        for (int i=0; i<N; i++)
                {
                printf(" %d ",wektorx[i]);
                }
                printf("]");


    /*==================przyrÛwnujÍ Y do X=====================*/
    for(int i=0;i<N;i++)
    wektory[i]=wektorx[i];
    //jezeli drugi wektor ma wiecej wspolrzednych zamieniam je na 0
    if(M>N){
            int i=M; //wprowadzam zmienna lokalna zeby nie zmieniac M
            for(i;i>N;i--)
            wektory[i]=0;
            }

   /* ===Pokaø wektor Y===*/
        printf("\nwektor Y=[");
        for (int i=0; i<M; i++)
                {
                printf(" %d ",wektory[i]);
                }
                printf("]");

			delete[] wektorx;
			delete[] wektory;	//zwalniam pamiec

				system("PAUSE");
				system("CLS");
				main();
}
