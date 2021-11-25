#include <stdio.h>
#include <locale.h>

int main() {
  //receives the age and weight of 15 persons, calculates the average wheight based on the age group. The age groups are 1 to 10 years, 11 to 20 years, 21 to 30 years, and greater than 31 years.
  setlocale(LC_ALL, "portuguese");
  int age, weight, sum_weight = 0, count_weight = 0, count_age = 0, count_age_group = 0;
  float average_weight[4]= [0, 0, 0, 0];
  for (int i = 0; i < 5; i++) {
    printf("%d person: Enter the age: ", i + 1);
    scanf("%d", &age);
    printf("%d person: Enter the weight: ", i + 1);
    scanf("%d", &weight);
    if (age <= 10) {
      sum_weight += weight;
      count_age++;
      count_age_group++;
    } else if (age <= 20) {
      sum_weight += weight;
      count_age++;
      count_age_group++;
    } else if (age <= 30) {
      sum_weight += weight;
      count_age++;
      count_age_group++;
    } else {
      sum_weight += weight;
      count_age++;
      count_age_group++;
    }
  }
  average_weight = (float)sum_weight / count_age_group;
  printf("%.2f\n", average_weight);
  return 0;
}