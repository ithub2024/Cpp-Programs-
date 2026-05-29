#include <iostream>
class Date {
private:
int date;
int month;
int year;
public:
// Constructor
Date(int d, int m, int y) {
date = d;
month = m;
year = y;
}
// Getter methods
int getDate() const {
return date;
}
int getMonth() const {
return month;
}
int getYear() const {
return year;
}
// Setter methods
void setDate(int d) {
date = d;
}
void setMonth(int m) {
month = m;
}
void setYear(int y) {
year = y;
}
// Member function to compare dates
void compareDates(const Date& other) const {
if (date == other.date && month == other.month && year ==
other.year) {
std::cout << "Equal\n";
} else {
std::cout << "Unequal\n";
}
}
};
int main() {
// Create two Date objects with different dates
Date date1(11, 3, 2024);
Date date2(10, 3, 2024);
// Compare the dates
std::cout << "Comparing date1 and date2: ";
date1.compareDates(date2);
return 0;
}