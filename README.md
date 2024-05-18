Understanding OOPs Concepts in C++
An informational repository on Object-Oriented Programming concepts.
------------------------------------------------------------------------------
--------------------------------------------------------------------------------

Welcome to the Object-Oriented Programming repository where we explore the fundamentals of Object-Oriented Programming (OOPs). In this repository, we delve into the key concepts of classes,objects,encapsulation ,abstraction,inheritance,polymorphism,providing explanations and code examples.

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

## 5. What is an Encapsulation ?

Encapsulation is about bundling data and methods together while hiding the internal details, that operate on that data into a single unit called a class.

## 6. What is an Abstraction ?
 Abstraction simplifies complex reality by focusing on essential properties and behaviors, ignoring irrelevant details. It focuses on what an object does rather than how it does it.

 ## 7. What is an Inheritance ?
 Inheritance allows you to create a new class based on an existing class, inheriting its properties and behaviors. Imagine an example of multi storey buliding with same base of foundation or the ground floor. 
And Inheritance like parent and child.

### Example :
```cpp
class Animal {  
    public :
    void eat(){
        cout<<"Eating";
    }
};
class peacock: public Animal {
    public :
    void sound(){
        cout<<"Pe-Pe-cock ";
    }
};
```


* Inheritance types are as follow:-> 
1.Single Inheritance
2.Multilevel Inheritance
3.Multiple Inheritance
4.Hierarchical Inheritance
1. Single Inheritance: A derived class inherits from only one base class.
                    Class A   ------------------>   Class B
                  ( Base Class )                  ( Derived Class ) 
  ### Example :

```cpp
class World {
public:
    void Totalbounadary() {
        cout << "Total Land perimeter" << endl;
    }
};

class Asia : public World {
public:
    void asiaBounary() {
        cout << "Asia boundary perimeter" << endl;
    }
};

```
2. Multiple Inheritance: A derived class inherits from more than one base class.

        *  Class(Shape)   and  Class(Color) two different class: and third Class(ColoredShape) inherit from these two classes.



### Example :


```cpp
class Shape {
public:
    void typeofshapes() {
        cout << "Triangle,Circle,Rectangle,Square, etc." << endl;
    }
};

class Color {
public:
    void paint() {
        cout << "Filling with color." << endl;
    }
};

class ColoredShape : public Shape, public Color {

};

```


3. Multilevel Inheritance: A derived class inherits from another derived class.


       * Class(World) ---> Class(Asia)        : class Asia inheritate class World.
       * Class(Asia)  ---> Class(India)       : class India inheritate class Asia.


### Example :



```cpp
class World {
public:
    void Totalbounadary() {
        cout << "Total Land perimeter" << endl;
    }
};

class Asia : public World {
public:
    void asiaBounary() {
        cout << "Asia boundary perimeter" << endl;
    }
};
class India: public Asia{

};

```
                     
4. Hierarchical Inheritance: Multiple classes inherit from a single base class.

        
### Example :


       Class A                                 Class B
     ( Base Class ) ________________________( Derived Class )
                  |                       
                  |                         Class C
                  |______________________( Derived Class )                  

```cpp
class Shape {

};

class Circle : public Shape {

};

class Square : public Shape {

};

```  
Inheritance helps in establishes a hierarchy for code organization and modularity and also enhances extensibility by adding or modifying features.


## 7. What is an Polymorphism ?    
              
It is a fundamental concept in OOP that allows objects of different types to be treated as objects of a common type.
This enables flexibility and extensibility in code design.

Polymorphism types: 
1.Compile-time Polymorphism
2.Run-time Polymorphism

1.Compile-time Polymorphism: Achieved through function overloading and operator overloading.

### Example :


```cpp


class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }
  // function overloading takes place.

    double add(double a, double b) {
        return a + b;
    }
};


```

2. Run-time Polymorphism: Achieved through function overriding and virtual functions.

### Example :

```cpp

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};


class Circle : public Shape {
public:
    void draw(){
        cout << "Drawing a circle." << endl;
    }
};


class Square : public Shape {
public:
    void draw(){
        cout << "Drawing a square." << endl;
    }
};


```

Polymorphism helps in code reuseability and extensibility and also enchance the adaptability.




### Learning:

OOP principles help developers can create well-organized, scalable, and maintainable software solutions across various domains, contributing to the efficiency and success of software engineering projects.

Like: Code Reusability, Code Organization and Maintenance, Data Security and Access Control, Complexity Management, Flexibility and Adaptability, System Extensibility, Object Lifecycle Management, Modular 
Design, Hierarchical Organization, Interoperability and Collaboration .

Happy coding!😊











     


    
