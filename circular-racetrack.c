#include <stdio.h>

int GetCarTrack(int time) {
   if (time <= 30) {
    puts("Brian's car in Concrete.");
  } else if (time > 30 && time <= 85) {
    puts("Brian's car in Mud.");
  } else if (time > 85 && time <= 132) {
    puts("Brian's car in Sand.");
  } else if (time > 132 && time <= 170) {
    puts("Brian's car in Asphalt");
  }
}

int main() {
  int time = 0;
  int tracks = 0;
  int lastRound = 0;
  int circle = 30 + 55 + 47 + 38;  // Total time

  printf("Enter positive TIME value in seconds: ");
  scanf("%d", &time);

  if (time <= circle) {
    GetCarTrack(time);
  } else {
    tracks = (time / circle);
    GetCarTrack(lastRound);
  }
  return 0;
}
