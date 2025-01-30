#include <stdio.h>
#include <string.h>

int main() {
 
    char data[5];
    fgets(data,sizeof(data),stdin);
    int x = 10*data[0];
    int u = data[1];
    int d = x + u;
    
    int y = 10*data[3];
    int j = data[4];
    int m = y + j;
    
    if(m == 4){
        if(d <= 20){
            printf("Áries\n");
        }
        else{
            printf("Touro\n");
        }
    }
    
    if(m == 5){
        if(d <= 20){
            printf("Touro\n");
        }
        else{
            printf("Gêmeos\n");
        }
    }
    
    if(m == 6){
        if(d <= 20){
            printf("Gêmeos\n");
        }
        else{
            printf("Câncer\n");
        }
    }
    
    if(m == 7){
        if(d <= 22){
            printf("Câncer\n");
        }
        else{
            printf("Leão");
        }
    }
     if(m == 8){
        if(d <= 22){
            printf("Leão\n");
        }
        else{
            printf("Virgem\n");
        }
    }
    
     if(m == 9){
        if(d <= 22){
            printf("Virgem\n");
        }
        else{
            printf("Libra\n");
        }
    }
    
     if(m == 10){
        if(d <= 22){
            printf("Libra\n");
        }
        else{
            printf("Escorpião\n");
        }
    }
    
     if(m == 11){
        if(d <= 21){
            printf("Escorpião\n");
        }
        else{
            printf("Sagitário\n");
        }
    }
    
     if(m == 12){
        if(d <= 21){
            printf("Sagitário\n");
        }
        else{
            printf("Capricórnio\n");
        }
    }
    
     if(m == 1){
        if(d <= 19){
            printf("Capricórnio\n");
        }
        else{
            printf("Aquário\n");
        }
    }
    
     if(m == 2){
        if(d <= 18){
            printf("Aquário\n");
        }
        else{
            printf("Peixes\n");
        }
    }
     if(m == 3){
        if(d <= 20){
            printf("Peixes\n");
        }
        else{
            printf("Áries\n");
        }
    }
    return 0;
}
