class Product {
    constructor(id, name, price, stock) {
        this.id = id
        this.name = name
        this.price = price
        this.stock = stock
    }
}

class Cart {
    add_product = []
    addProduct(id, name, price, quantity) {
        this.add_product.push({ id, name, price, quantity })
    }
   
    deleteProduct(name)
    {
        this.add_product = this.add_product.filter(product_name=> { return product_name.name != name })
    
    }
    changeQunantity(name, quantity)
    {
        for (let i = 0; i < this.add_product.length; i++)
        {
            let a = this.add_product[i]
            if (a.name == name)
            {
                a.quantity= quantity
            }
        }
    }
    totalPrice()
    {
        let total = this.add_product.reduce((sum, x) => { return sum = sum + (x.quantity * x.price) }, 0)
        return total
    }


    getInfo() {
        return this.add_product
    }
}

class User{
    constructor(name)
    {
        this.name = name
        this.cart = new Cart()
    }
    addToCart(product, quantity) {
        if (quantity <= product.stock) {
            this.cart.addProduct(
                product.id,
                product.name,
                product.price,
                quantity
                )
        }
        else {
             console.log(`${product.name} uchun stock yetarli emas`)
        }
        }
    }

let apple = new Product(1, "Apple", 13, 10)
let kivi = new Product(2, "Kivi", 12, 5)

let user = new User("Asliddin")

user.addToCart(apple, 23)
user.addToCart(kivi, 2)

console.log(user.cart.getInfo())
console.log(user.cart.totalPrice())
