#include <iostream>
#include <iomanip>

const int NUM_SEATS = 10;
bool seats[NUM_SEATS] = {false};

void displayAvailableSeats() {
    std::cout << "Available seats: ";
    for (int i = 0; i < NUM_SEATS; i++) {
        if (!seats[i]) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;
}

void bookSeat() {
    displayAvailableSeats();
    int seatNumber;
    std::cout << "Enter the seat number you want to book: ";
    std::cin >> seatNumber;

    if (seatNumber < 1 || seatNumber > NUM_SEATS) {
        std::cout << "Invalid seat number. Please choose a seat between 1 and " << NUM_SEATS << std::endl;
        return;
    }

    if (seats[seatNumber - 1]) {
        std::cout << "Seat " << seatNumber << " is already booked. Please select another seat." << std::endl;
    } else {
        seats[seatNumber - 1] = true;
        std::cout << "Seat " << seatNumber << " booked successfully!" << std::endl;
    }
}

int main() {
    int choice;

    do {
        std::cout << "Train Reservation System" << std::endl;
        std::cout << "1. Book a seat" << std::endl;
        std::cout << "2. Display available seats" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                bookSeat();
                break;
            case 2:
                displayAvailableSeats();
                break;
            case 3:
                std::cout << "Thank you for using the Train Reservation System." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    } while (choice != 3);

    return 0;
}

