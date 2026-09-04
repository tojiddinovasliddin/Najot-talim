const products = [
    { id: 1, name: "iPhone 15", category: "phone", price: 900, quantity: 5 },
    { id: 2, name: "Samsung S24", category: "phone", price: 800, quantity: 3 },
    { id: 3, name: "MacBook Air", category: "laptop", price: 1200, quantity: 2 },
    { id: 4, name: "Lenovo ThinkPad", category: "laptop", price: 1000, quantity: 4 },
    { id: 5, name: "AirPods", category: "accessory", price: 200, quantity: 10 }
];
let product_id = 3
let find_with_id= products.find((product) => { return product_id == product.id})

console.log(find_with_id)

let category_by_model = new Map()
for (let i = 0; i < products.length; i++) {
    let a = products[i]
    if (category_by_model.has(a.category)) {
        let s = category_by_model.get(a.category)
        category_by_model.set(a.category, s + 1)
    } else {
        category_by_model.set(a.category, 1)
    }
}

console.log(category_by_model)

let total_price = new Map()
for (let product of products) {
    let price = product.price * product.quantity
    if (total_price.has(product.category)) {
        let old = total_price.get(product.category)
        total_price.set(product.category, old + price)
    } else {
        total_price.set(product.category, price)
    }
}

console.log(total_price)

let maxs = [...total_price.values()]
max = Math.max(...maxs)
let max_name;
for (let [key,value] of total_price)
{
    if (value == max)
    {
        max_name = key
    }
}

console.log(max_name)

