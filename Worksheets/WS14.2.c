/*
 * Author:  Nate Noguera
 * Date:    October 15, 2021
 * Purpose: Prompt the user for the weight of a parcel, and then compute
 * and print */

#include <stdio.h>
#include <stdlib.h>

#define SM_WEIGHT      2.0  /* limiting weight for small parcels in kgs */
#define MD_WEIGHT      4.0  /* limiting weight for medium parcels in kgs */
#define SM_BASE_RATE   3.0  /* base rate for small parcels */
#define LG_BASE_RATE   4.5  /* base rate for large parcels */
#define MD_RATE_PER_KG 0.75 /* rate per kg for medium parcels */
#define LG_RATE_PER_KG 0.95 /* rate per kg for large parcels */

double calcCost(double weight);

int main(void) {
  double weightKgs;
  double cost;

  printf("Please enter a weight in kilograms: ");
  scanf("%lf", &weightKgs);
  
  /* Your code here */

  cost = calcCost(weightKgs);

  printf("Cost of shipping $%.2f\n", cost);
  
  return 0;
}

/*
 * Purpose: Determine the cost of shipping a parcel of a given weight.
 * Parameter: weight - weight of  the parcel in kgs
 * Returns: cost of shipping the parcel
 */

double calcCost(double weight) {

  if (weight <= SM_WEIGHT)
    return SM_BASE_RATE;

  else if (weight > SM_WEIGHT && weight <= MD_WEIGHT) 
    return (SM_BASE_RATE + (MD_RATE_PER_KG * (weight - SM_WEIGHT)));

  else
    return (LG_BASE_RATE + (LG_RATE_PER_KG * (weight - MD_WEIGHT)));
}