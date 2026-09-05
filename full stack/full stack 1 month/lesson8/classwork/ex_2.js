class Product{
    constructor(name,price,quantity)
    {
        this.name = name
        this.price = price
        this.quantity = quantity
    }
    getTotal()
    {
        return this.price * this.quantity
    }
}
let product = new Product("Coca", 12, 45)
console.log(product.getTotal())

