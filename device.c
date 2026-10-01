#include<stdio.h>

struct device{
    int device_id;
    char device_name[50];
    float voltage;
    float current;
};

float device_pow(struct device *d){
    return (*d).voltage * (*d).current;
}


int main(){
    struct device d1;

    printf("Enter device ID: ");
    scanf("%d", &d1.device_id);

    printf("Enter device name: ");
    scanf(" %[^\n]", d1.device_name);

    printf("Enter voltage (V): ");
    scanf("%f", &d1.voltage);

    printf("Enter current (A): ");
    scanf("%f", &d1.current);

    float power = device_pow(&d1);

    printf("\nDevice ID: %d\n", d1.device_id);
    printf("Device name: %s\n", d1.device_name);
    printf("Voltage: %.2f V\n", d1.voltage);
    printf("Current: %.2f A\n", d1.current);
    printf("Power: %.2f W\n", power);

    return 0;
}