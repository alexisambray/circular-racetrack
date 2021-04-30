#include <stdio.h>

typedef enum { CONCRETE = 30, MUD = 55, SAND = 47, ASPHALT = 38 } CarTrack;
const int SECONDS_IN_REV = CONCRETE + MUD + SAND + ASPHALT;

CarTrack getCarTrack(int time) {
  CarTrack carTrack;

  if (time < CONCRETE) {
    carTrack = CONCRETE;
  } else if (time < CONCRETE + MUD) {
    carTrack = MUD;
  } else if (time < CONCRETE + MUD + SAND) {
    carTrack = SAND;
  } else if (time < CONCRETE + MUD + SAND + ASPHALT) {
    carTrack = ASPHALT;
  }
  return carTrack;
}

void displayCarTrack(CarTrack carTrack) {
  switch (carTrack) {
    case CONCRETE:
      puts("Sly Slick's car is in concrete.");
      break;
    case MUD:
      puts("Sly Slick's car is in mud.");
      break;
    case SAND:
      puts("Sly Slick's car is in sand.");
      break;
    case ASPHALT:
      puts("Sly Slick's car is in asphalt.");
  }
}

int main() {
  int time = 0;

  printf("Enter positive TIME value in seconds: ");
  scanf("%d", &time);

  time %= SECONDS_IN_REV;

  CarTrack carTrack = getCarTrack(time);
  displayCarTrack(carTrack);

  return 0;
}
