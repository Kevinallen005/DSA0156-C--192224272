#include <iostream>
#include <string>

class Vehicle {
public:
    Vehicle(const std::string& make, const std::string& model, int year)
        : make(make), model(model), year(year) {}

    std::string getMake() const {
        return make;
    }

    void setMake(const std::string& newMake) {
        make = newMake;
    }

    std::string getModel() const {
        return model;
    }

    void setModel(const std::string& newModel) {
        model = newModel;
    }

    int getYear() const {
        return year;
    }

    void setYear(int newYear) {
        year = newYear;
    }

private:
    std::string make;
    std::string model;
    int year;
};

class Car : public Vehicle {
public:
    Car(const std::string& make, const std::string& model, int year, int seatingCapacity, const std::string& fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    void setSeatingCapacity(int newSeatingCapacity) {
        seatingCapacity = newSeatingCapacity;
    }

    std::string getFuelType() const {
        return fuelType;
    }

    void setFuelType(const std::string& newFuelType) {
        fuelType = newFuelType;
    }

private:
    int seatingCapacity;
    std::string fuelType;
};

class Truck : public Vehicle {
public:
    Truck(const std::string& make, const std::string& model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    int getPayloadCapacity() const {
        return payloadCapacity;
    }

    void setPayloadCapacity(int newPayloadCapacity) {
        payloadCapacity = newPayloadCapacity;
    }

    int getTowingCapacity() const {
        return towingCapacity;
    }

    void setTowingCapacity(int newTowingCapacity) {
        towingCapacity = newTowingCapacity;
    }

private:
    int payloadCapacity;
    int towingCapacity;
};

int main() {
    Car car("Toyota", "Camry", 2023, 5, "Gasoline");
    car.setMake("Honda");
    car.setSeatingCapacity(4);

    Truck truck("Ford", "F-150", 2023, 2000, 10000);
    truck.setYear(2024);
    truck.setTowingCapacity(12000);

    std::cout << "Car: " << car.getMake() << " " << car.getModel() << " " << car.getYear()
              << " Seating Capacity: " << car.getSeatingCapacity() << " Fuel Type: " << car.getFuelType() << std::endl;

    std::cout << "Truck: " << truck.getMake() << " " << truck.getModel() << " " << truck.getYear()
              << " Payload Capacity: " << truck.getPayloadCapacity() << " Towing Capacity: " << truck.getTowingCapacity() << std::endl;

    return 0;
}

