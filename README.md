Understanding OOP Concepts in C++
An informational repository on Object-Oriented Programming concepts.
------------------------------------------------------------------------------
--------------------------------------------------------------------------------

Welcome to the Object-Oriented Programming repository where we explore the fundamentals of Object-Oriented Programming (OOP). In this repository, we delve into the key concepts of classes,objects,encapsulation ,abstraction,inheritance,polymorphism,providing explanations and code examples.

## Table of Contents

- [What is a Class?](#what-is-a-class)
- [What is an Object?](#what-is-an-object)
- [What is an Access Modifier?](#what-is-an-access-modifier)
- [What is a Getter and Setter?](#what-is-a-getter-and-setter)
- [What is a Constructor and Destructor?](#what-is-a-constructor-and-destructor)
- [What is Encapsulation?](#what-is-encapsulation)
- [What is Abstraction?](#what-is-abstraction)
- [What is Inheritance?](#what-is-inheritance)
- [What is Polymorphism?](#what-is-polymorphism)


## 1. What is a Class ?

In OOP, a class is a blueprint or template for creating objects. It defines the members and methods that objects created from this class will have.

Defining a Class : ->

To define a class, you may use the `class` keyword followed by the class name. Here's an example of defining a simple class in C++:


[ Code :-> Simple Code for creating a Class .Here Person is the class name or user created datatype ] 

### Example:
```cpp
class Person {

  // Class members and methods go here
};
```


## 2. What is an Object ?

An object is an instance of a class. It represents a specific entity with its own set of state and behaviors.For example like "Dog" have colour,breed,sleeping and eating habits.
So state is colour and breed here and behaviours is eating and sleeping habits.


[ Code ] :-> Simple Code for creating an Object name p1.

### Example:
```cpp
class Person {
public:
    int age;
};

int main() {
    Person p1;
    return 0;
};
```

  
## 3. What is an Access Modifiers ?

 Access modifiers determine the visibility of class members outside the class.
 
 Access Modifiers are of three types :
 
 1> public    :-> Members declared by the help of public keyword.And accessed by objects of the class and external code that uses the class.
 
 2> private   :-> Members declared by the help of private keyword.They are accessed within the class and cannot be accessed directly.
 
 3> protected :->  Members declared by the help of protected kryword.Accessible from derived classes (subclasses) but not from outside the class. They provide a level of visibility between public and private.

 ### Example:
 
 ```cpp

class Account {
public:
    string name; // Public: Accessible from anywhere.
private:
    int accountnumber; // Private: Accessible only within the class.
protected:
    int managerCode; // Protected: Accessible within the class and derived classes.
};

```

## 4. What is a Getter and Setter ?

Getters and setters are methods used to access and modify private or protected class members.

### Example :

```cpp

class Hero{
    private :
        char level;
    public :
        int health;
        void setLevel(char ch){
            level = ch;
        }
        char getLevel(){
            return level;
        }
};
```


## 4. What is a Constructor and Destructor ?

Imagine of a pet robot.The constructor is like its "birth," and the destructor is when it's "retiring" and gets a farewell party.It means that constructors initialize objects when they are created, while

destructors clean up resources when objects go out of scope. 

Generally constructors are of three types : 1> Default Constructor, 2> Parameterized Constructor, 3> Copy Constructor

1. Default Constructor:

A default constructor is one that doesn't take any parameters. It initializes the object with default values.And if you do not make any constructor in the class then program have by default constructor.

2. Parameterized Constructor:

A parameterized constructor takes one or more parameters and initializes the object with the provided values.

3. Copy Constructor:

A copy constructor creates a new object by copying the values from an existing object of the same class,but it does not necessarily mean that the new object will reside at the same memory address.

 Delegate Constructor :

A delegate constructor allows one constructor to call another constructor in the same class.

### Example :

```cpp
class Person{
private :

    string name;
    int age;
    int weight;
    char gender;

public :

    Person(string n, int a, int w, char g){
          // It is a parameterized Constructor.
        name = n;
        age = a;
        weight =w;
        gender = g;

    }
    Person(){
        // It is default Constructor.
        name ="unknown";
        age =0;
        weight =0;
        gender ='n';

    }
};
```

## 5. What is Encapsulation ?

Encapsulation is about bundling data and methods together while hiding the internal details.



     


    
