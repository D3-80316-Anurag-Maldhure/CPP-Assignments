#include <iostream>
#include <vector>

template <typename T>
class Array {
private:
    std::vector<T> data;

public:
    // Constructor to initialize the array with a given size
    Array(int size) {
        if (size < 0) {
            throw std::invalid_argument("Size cannot be negative.");
        }
        data.resize(size);
    }

    // Function to add an element at a specific index
    void addElement(int index, T element) {
        if (index < 0 || index >= data.size()) {
            throw std::out_of_range("Index is out of range.");
        }
        data[index] = element;
    }

    // Function to display an element at a specific index
    T displayElement(int index) const {
        if (index < 0 || index >= data.size()) {
            throw std::out_of_range("Index is out of range.");
        }
        return data[index];
    }

    // Function to delete an element at a specific index
    void deleteElement(int index) {
        if (index < 0 || index >= data.size()) {
            throw std::out_of_range("Index is out of range.");
        }
        data.erase(data.begin() + index);
    }

    // Mutator: Set the element at a specific index
    void setElement(int index, T element) {
        if (index < 0 || index >= data.size()) {
            throw std::out_of_range("Index is out of range.");
        }
        data[index] = element;
    }

    // Inspector: Get the size of the array
    int getSize() const {
        return data.size();
    }
};

int main() {
        // Create an integer array of size 5
        Array<int> intArray(5);

        // Add elements to the array
        intArray.addElement(0, 10);
        intArray.addElement(1, 20);
        intArray.addElement(2, 30);

        // Display elements at specific indices
        std::cout << "Element at index 0: " << intArray.displayElement(0) << std::endl;
        std::cout << "Element at index 2: " << intArray.displayElement(2) << std::endl;

        // Delete an element
        intArray.deleteElement(1);

        // Display the updated array size
        std::cout << "Array size: " << intArray.getSize() << std::endl;

    return 0;
}
