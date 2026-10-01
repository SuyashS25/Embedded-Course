#include <stdio.h>

struct sensor {
    int sensor_id;
    char sensor_name[50];
    float readings[5];
};

void read_sensor(struct sensor *s) {
    printf("Enter sensor ID: ");
    scanf("%d", &(*s).sensor_id);

    printf("Enter sensor name: ");
    scanf(" %[^\n]", (*s).sensor_name);

    for (int i = 0; i < 5; i++) {
        printf("Enter reading %d: ", i + 1);
        scanf("%f", &(*s).readings[i]);
    }
}

float average_reading(struct sensor *s) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + (*s).readings[i];
    }
    return sum / 5;
}

float max_reading(struct sensor *s) {
    float max = (*s).readings[0];
    for (int i = 1; i < 5; i++) {
        if ((*s).readings[i] > max) {
            max = (*s).readings[i];
        }
    }
    return max;
}

void display_sensor(struct sensor *s) {
    printf("\n--- Sensor Information ---\n");
    printf("Sensor ID   : %d\n", (*s).sensor_id);
    printf("Sensor name : %s\n", (*s).sensor_name);
    printf("Readings    :");
    for (int i = 0; i < 5; i++) {
        printf(" %.2f", (*s).readings[i]);
    }
    printf("\n");
    printf("Average     : %.2f\n", average_reading(s));
    printf("Maximum     : %.2f\n", max_reading(s));
}

int main() {
    struct sensor s1;

    read_sensor(&s1);
    display_sensor(&s1);

    return 0;
}