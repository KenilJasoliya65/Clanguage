//Q-5 :Develop a C program that defines a strucure representing a Car(with attributes like model,year and price). List N numbers of cars' details using Array of objects.
#include <stdio.h>
#include<string.h>

struct vehical{
    char company_name[30];
    char model[30];
    int year;
    double price;
}car;

int main() { 
    {
    char company_name[30]="Maruti Suzuki Pvt.Ltd.";
    strcpy(car.company_name,company_name);
    char model[30]="Wagon r LXi";
    strcpy(car.model,model);
    car.year=2023;
    car.price=650000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="Ford";
    strcpy(car.company_name,company_name);
    char model[30]="Figo";
    strcpy(car.model,model);
    car.year=2027;
    car.price=550000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="Maruti Suzuki Pvt.Ltd.";
    strcpy(car.company_name,company_name);
    char model[30]="Wagon r VXi";
    strcpy(car.model,model);
    car.year=2024;
    car.price=750000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="Hyundai";
    strcpy(car.company_name,company_name);
    char model[30]="Grand i10 Nion";
    strcpy(car.model,model);
    car.year=2024;
    car.price=850000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="TATA";
    strcpy(car.company_name,company_name);
    char model[30]="Tiago";
    strcpy(car.model,model);
    car.year=2021;
    car.price=435000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    

    return 0;