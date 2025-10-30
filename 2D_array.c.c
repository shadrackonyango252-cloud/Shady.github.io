#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;


    srand(time(0));

    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    printf("Room Occupancy Report (1 = Occupied, 0 = Vacant)\n\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d: ", floor + 1);

        for (room = 0; room < 10; room++) {
            printf("%d ", occupancy[floor][room]);

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\n  Occupied rooms: %d\n", occupied);
        printf("  Vacant rooms  : %d\n\n", vacant);
    }

    return 0;
}
