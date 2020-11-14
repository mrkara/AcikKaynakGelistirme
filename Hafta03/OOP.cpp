#include <iostream> //Standart giriş çıkış işlemleri
#include <string>
#include <fstream> //Dosya işlemleri

using namespace std;

/*class MyClass
{
    // The class
public:
    // Access specifier
    int myNum;
    // Attribute (int variable)
    string myString; // Attribute (string variable)
};

int main()
{
    MyClass myObj; // Create an object of MyClass
    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";
    // Print attribute values
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    return 0;
}*/

/*class MyClass {
// The class
public:
// Access specifier
void myMethod(); // Method/function declaration
};
// Method/function definition outside the class
void MyClass::myMethod() {
cout << "Hello World!";
}
int main() {
MyClass myObj; // Create an object of MyClass
myObj.myMethod(); // Call the method
return 0;
}*/

/*class MyClass { // The class
public:
// Access specifier
MyClass() { // Constructor
cout << "Hello World!";
}
};
int main() {
MyClass myObj; // Create an object of MyClass (this will call the constructor)
return 0;
}*/

/*class MyClass
{
public: // Public access specifier
    int x; // Public attribute
    void printY() { cout << "Y'nin değeri: " << y << endl; }

private: // Private access specifier
    int y = 5; // Private attribute
};
int main()
{
    MyClass myObj;
    myObj.x = 25; // Allowed (public)
    //myObj.y = 50; // Not allowed (private)
    myObj.printY();
    return 0;
}*/

//Kapsülleme

/*class Employee
{
private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s) { salary = s; }
    // Getter
    int getSalary() { return salary; }
};
int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary() << endl;
    return 0;
}*/

//Kalıtım

// Base class
/*class Vehicle
{
public:
    string brand = "Ford";
    void honk() { cout << "Tuut, tuut! \n"; }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;
    return 0;
}*/

//Çokbiçimlilik

// Base class
/*class Animal
{
public:
    void animalSound() { cout << "The animal makes a sound \n"; }
};
// Derived class
class Pig : public Animal
{
public:
    void animalSound() { cout << "The pig says: wee wee \n"; }
};
// Derived class
class Dog : public Animal
{
public:
    void animalSound() { cout << "The dog says: bow wow \n"; }
};

int main()
{
    Dog kopek;

    kopek.animalSound();

    return 0;
}*/

//Dosya İşlemleri

/*int main()
{
    //Dosya yazma işlemleri
    // Create and open a text file
    ofstream MyFile("filename.txt");
    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";
    // Close the file
    MyFile.close();

    //Dosya okuma işlemleri
    // Create a text string, which is used to output the text file
    string myText;

    try {
    // Read from the text file
    ifstream MyReadFile("filename.txt");
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText;
    }
    // Close the file
    MyReadFile.close();
    }
    catch(exception e)
    {
        cout << "Dosya okuma işlemi sırasında bir hata oluştu: " << e.what() << endl;
    }

    return 0;
}*/

int main()
{
    try
    {
        int age = 19;
        if (age > 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age);
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }

    return 0;
}