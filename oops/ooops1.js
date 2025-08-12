class Product {
  #name; //private

  constructor(n, p, d) {
    this.#name = n;
    this.price = p;
    this.discription = d;

    // /return "10" //primitive no efffect
    // return {x:10}
    // return this; //if you dont return anything it will return equal to
    // returning this
  }

  //no conecpt of constructor overloading in js you can use only one constructor

  ///setter for initialization of private variable
  set setName(name) {
    if (typeof name != "string") {
      throw new Error("name must be a string");
    }

    this.#name = name;
  }

  get getName() {
    return this.#name;
  }

  display() {
    console.log(this.#name, this.price, this.discription);
  }
}

///new keyword creates a brand new object
const p = new Product("Bag", 100, "a cool bag");
p.setName = "shoes";
p.display();
console.log(p);

///////////////////////////////////////////////////////////////////////
///constructor function are also there in js
// function Product(n, p, d) {
//   this.name = n;
//   this.price = p;
//   this.discription = d;
//   this.display = function () {
//     (((((cout << name) << " ") << price) << " ") << discription) << endl;
//   };
// }

// const p = new Product("Bag", 100, "a cool bag");
// console.log(p);

///abtraction
// you hide the details that are not neccessary for end user
