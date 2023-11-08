# TrainReservation


Description:
This code defines a simple train reservation system with ten seats. Users can choose to book a seat, display available seats, or quit the program. When booking a seat, the program displays available seats and allows the user to select a seat number. It checks if the seat is available and reserves it if it is. If the seat is already booked or the seat number is out of range, appropriate messages are displayed.


Build and run:
1.We create a TrainReservation class to encapsulate the train reservation functionality.
2.The class maintains an array seats to represent the availability of seats. Each seat is represented by a boolean value (true for reserved, false for available).
3.The bookTicket method allows a user to book a seat. It prompts the user to enter a seat number and checks if the seat is available or not. If the seat is available, it marks it as reserved.
4.The cancelTicket method allows a user to cancel a reservation. It checks if the seat is already reserved and marks it as available if it is.
5.The displayAvailableSeats method lists the available seats.
6.In the main function, we provide a menu for users to book, cancel, or display available seats. Users can choose to exit the program as well.



Name: Tahria Jannath Chowdhury
Student ID: 222-115-232
