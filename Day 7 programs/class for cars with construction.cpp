#include <iostream>
#include <string>

class Car {
  private:
    std::string reportingMark;
    int carNumber;
    std::string kind;
    bool loaded;
    std::string destination;

  public:
    Car() {
      setup();
    }
    Car(const Car& other) {
      *this = other;
    }
    Car(std::string rm, int cn, std::string k, bool ld, std::string dst) {
      reportingMark = rm;
      carNumber = cn;
      kind = k;
      loaded = ld;
      destination = dst;
    }
    ~Car() {
    }
    void setup() {
      std::cout << "Enter the reporting mark: ";
      std::cin >> reportingMark;
      std::cout << "Enter the car number: ";
      std::cin >> carNumber;
      std::cout << "Enter the kind (business, maintenance, or other): ";
      std::cin >> kind;
      std::cout << "Is the car loaded? (true/false): ";
      std::cin >> loaded;
      if (loaded) {
        std::cout << "Enter the destination: ";
        std::cin >> destination;
      } else {
        destination = "NONE";
      }
    }

    void output() const {
      std::cout << "\nReporting Mark: " << reportingMark;
      std::cout << "\nCar Number: " << carNumber;
      std::cout << "\nKind: " << kind;
      std::cout << "\nLoaded: " << (loaded ? "true" : "false");
      std::cout << "\nDestination: " << destination;
    }
};

int main() {
  Car car1;
  Car car2(car1);
  Car car3("ABC", 123, "business", true, "New York");

  car1.output();
  car2.output();
  car3.output();

  return 0;
}
