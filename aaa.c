#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    
    
  //sifrelemede kullanilacak sayilar olusturuluyor.  
 int a;
 srand( time(NULL) );
 a= (rand() %5)+1;   
 int array[]={2*a,2*a+1,(2*a)*(2*a+1)};
 int array1[]={2*array[0],2*array[0]+1,(2*array[0])*(2*array[0])};
 int array2[]={2*array[1],2*array[1]+1,(2*array[1])*(2*array[1])};
 int array3[]={2*array[2],2*array[2]+1,(2*array[2])*(2*array[2])};
 int array1_1[]={2*array1[0],2*array1[0]+1,(2*array1[0])*(2*array1[0])};
 int array1_2[]={2*array[1],2*array[1]+1,(2*array[1])*(2*array[1])};
  int array1_3[]={2*array[2],2*array[2]+1,(2*array[2])*(2*array[2])};  
  int array2_1[]={2*array2[0],2*array2[0]+1,(2*array2[0])*(2*array2[0])};      
    int array2_2[]={2*array2[1],2*array2[1]+1,(2*array2[1])*(2*array2[1])};
    int array2_3[]={2*array2[2],2*array2[2]+1,(2*array2[2])*(2*array2[2])};
    int array3_1[]={2*array3[0],2*array3[0]+1,(2*array3[0])*(2*array3[0])};
     int array3_2[]={2*array3[1],2*array3[1]+1,(2*array3[1])*(2*array3[1])};
      int array3_3[]={2*array3[2],2*array3[2]+1,(2*array3[2])*(2*array3[2])}; 
    long array1_1_1[]={2*array1_1[0],2*array1_1[0]+1,(2*array1_1[0])*(2*array1_1[0])};
     long array1_1_2[]={2*array1_1[1],2*array1_1[1]+1,(2*array1_1[1])*(2*array1_1[1])};
      long array1_1_3[]={2*array1_1[2],2*array1_1[2]+1,(2*array1_1[2])*(2*array1_1[2])};
    long array1_2_1[]={2*array1_2[0],2*array1_2[0]+1,(2*array1_2[0])*(2*array1_2[0])};
     long array1_2_2[]={2*array1_2[1],2*array1_2[1]+1,(2*array1_2[1])*(2*array1_2[1])};
     long array1_2_3[]={2*array1_2[2],2*array1_2[2]+1,(2*array1_2[2])*(2*array1_2[2])};
     long array1_3_1[]={2*array1_3[0],2*array1_3[0]+1,(2*array1_3[0])*(2*array1_3[0])};
     long array1_3_2[]={2*array1_3[1],2*array1_3[1]+1,(2*array1_3[1])*(2*array1_3[1])};
      long array1_3_3[]={2*array1_3[2],2*array1_3[2]+1,(2*array1_3[2])*(2*array1_3[2])};
       long array2_1_1[]={2*array2_1[0],2*array2_1[0]+1,(2*array2_1[0])*(2*array2_1[0])};
        long array2_1_2[]={2*array2_1[1],2*array2_1[1]+1,(2*array2_1[1])*(2*array2_1[1])};
         long array2_1_3[]={2*array2_1[2],2*array2_1[2]+1,(2*array2_1[2])*(2*array2_1[2])};
          long array2_2_1[]={2*array2_2[0],2*array2_2[0]+1,(2*array2_2[0])*(2*array2_2[0])};
    long array2_2_2[]={2*array2_2[1],2*array2_2[1]+1,(2*array2_2[1])*(2*array2_2[1])};
    long array2_2_3[]={2*array2_2[2],2*array2_2[2]+1,(2*array2_2[2])*(2*array2_2[2])};
    long array2_3_1[]={2*array2_3[0],2*array2_3[0]+1,(2*array2_3[0])*(2*array2_3[0])};
    long array2_3_2[]={2*array2_3[1],2*array2_3[1]+1,(2*array2_3[1])*(2*array2_3[1])};
    long array2_3_3[]={2*array2_3[2],2*array2_3[2]+1,(2*array2_3[2])*(2*array2_3[2])};
    long array3_1_1[]={2*array3_1[0],2*array3_1[0]+1,(2*array3_1[0])*(2*array3_1[0])};
    long array3_1_2[]={2*array3_1[1],2*array3_1[1]+1,(2*array3_1[1])*(2*array3_1[1])};
    long array3_1_3[]={2*array3_1[2],2*array3_1[2]+1,(2*array3_1[2])*(2*array3_1[2])};
    long array3_2_1[]={2*array3_2[0],2*array3_2[0]+1,(2*array3_2[0])*(2*array3_2[0])};
     long array3_2_2[]={2*array3_2[1],2*array3_2[1]+1,(2*array3_2[1])*(2*array3_2[1])};
      long array3_2_3[]={2*array3_2[2],2*array3_2[2]+1,(2*array3_2[2])*(2*array3_2[2])};
       long array3_3_1[]={2*array3_3[0],2*array3_3[0]+1,(2*array3_3[0])*(2*array3_3[0])};
      long array3_3_2[]={2*array3_3[1],2*array3_3[1]+1,(2*array3_3[1])*(2*array3_3[1])};
        long array3_3_3[]={2*array3_3[2],2*array3_3[2]+1,(2*array3_3[2])*(2*array3_3[2])};
    long crypto[]={array1_1_1[0],array1_1_1[1],array1_1_1[2],array1_1_2[0],array1_1_2[1],array1_1_2[2],
    array1_1_3[0],array1_1_3[1],array1_1_3[2],array1_2_1[0],array1_2_1[1],array1_2_1[2],array1_2_2[0],
    array1_2_2[1],array1_2_2[2],array1_2_3[0] ,array1_2_2[1],array1_2_2[2],array1_2_3[0],array1_2_3[1],
    array1_2_3[2],array1_3_1[0],array1_3_1[1],array1_3_1[2],array1_3_2[0],array1_3_2[1],array1_3_3[2],
    array1_3_3[0],array1_3_3[1],array1_3_3[2],array2_1_1[0],array2_1_1[1],array2_1_1[2],array2_1_2[0],
    array2_1_2[1],array2_1_2[2],array2_1_3[0],array2_1_3[1],array2_1_3[2],array2_2_1[0],array2_2_1[1],
    array2_2_1[2],array2_2_2[0],array2_2_2[1],array2_2_2[2],array2_2_3[0],array2_2_3[1],array2_2_3[2],
    array2_3_1[0],array2_3_1[1],array2_3_1[2],array2_3_2[0],array2_3_2[1],array2_3_2[2],array2_3_3[0],
    array2_3_3[1],array2_3_3[2],array3_1_1[0],array3_1_1[1],array3_1_1[2],array3_1_2[0],array3_1_2[1],
    array3_1_3[2],array3_1_3[0],array3_1_3[1],array3_1_3[2],array3_2_1[0],array3_2_1[1],array3_2_1[2],
    array3_2_2[0],array3_2_2[1],array3_2_2[2],array3_2_3[0],array3_2_3[1],array3_2_3[2], array3_3_1[0],
    array3_3_1[1],array3_3_1[2], array3_3_2[0],array3_3_2[1],array3_3_2[2], array3_3_3[0],array3_3_3[1],array3_3_3[2]};                                                                                                                                                                                                                                                                                               
 
 //sifrelenecek metin aliniyor
char hey[1000];
scanf("%s",hey);


//her harf sifreleniyor
int k;
for(k=0;k<1001;k++){
                    if(hey[k]>32&&hey[k]<127){
                                              
          hey[k]=((crypto[k%81]+hey[k])%93)+33;          
                                    }    
                    }
//her mesajin basina sifreleme sayısını cozebilmek icin sifrelenmis bir unlem koydum
char c=33+(crypto[0]/16)*5;
printf("%c",c);
printf("%s",hey); 
                  
    getch();
 return 0;   
}
