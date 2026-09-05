class Vehicle{
    constructor(brand, model, pricePerDay)
    {
        this.brand = brand
        this.model = model
        this.pricePerDay = pricePerDay
    }
    calculatePrice(days)
    {
        return this.pricePerDay * days
    }
    rent(days)
    {
        return {
            Brand: `${this.brand}`,
            Model: `${this.model}`,
            Daily_Price: `${this.pricePerDay}`,
            Total_price: `${this.calculatePrice(days)}`

        }
    }

}
class Car extends Vehicle {
    constructor(brand, model, pricePerDay) {
        super(brand, model, pricePerDay)
    }
    calculatePrice(days) {
      return this.pricePerDay * days
    }
}

class Motorcycle extends Vehicle {
    constructor(brand, model, pricePerDay) {
        super(brand, model, pricePerDay)
    }
    calculatePrice(days)
    {
        let total = this.pricePerDay * days
        return total - total /10
    }
}

class Truck extends Vehicle {
    constructor(brand, model, pricePerDay) {
        super(brand, model, pricePerDay)
    }
    calculatePrice(days)
    {
        let total = this.pricePerDay * days
        return total - total / 5
    }
}

let car = new Car("Chevrolet", "Spark", 100)
console.log(car.rent(3))
let moto = new Motorcycle("Chevrolet", "Spark", 100)
console.log(moto.rent(3))
let truck = new Truck("Chevrolet", "Spark", 100)
console.log(truck.rent(3))
