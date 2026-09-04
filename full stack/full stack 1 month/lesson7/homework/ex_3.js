function check(ms)
{
    let user_max = 0
    let user_name;
    for (let [key, value] of ms) {
        if (value > user_max) {
            user_max = value
            user_name = key
        }
    }
    return user_name
}

const sales = [
    { userId: 1, productId: 101, amount: 500 },
    { userId: 2, productId: 102, amount: 300 },
    { userId: 1, productId: 103, amount: 700 },
    { userId: 3, productId: 101, amount: 200 },
    { userId: 2, productId: 103, amount: 400 },
    { userId: 1, productId: 101, amount: 600 }
];
let user_spend_money = new Map()
for (sale of sales)
{
    if (user_spend_money.has(sale.userId))
    {
       let s =  user_spend_money.get(sale.userId)
        user_spend_money.set(sale.userId,sale.amount+s)
    }
    else
    {
        user_spend_money.set(sale.userId,sale.amount)
    }
}

console.log(user_spend_money)

let user_name = check(user_spend_money)
console.log(`Eng kup saflagan user: ${user_name}`)
let product = new Map
for (sale of sales)
{
    if (product.has(sale.productId))
    { 
        let s = product.get(sale.productId)
        product.set(sale.productId,s + 1)
    }
    else
    {
        product.set(sale.productId, 1)
    }
}
console.log(product)
let product_name = check(product)
console.log(`Eng kup sotilgan maxsulot ID: ${product_name}`)