// Qanday xatorlik ni chiqarishni tushunmagnim uchun if ishlatim 
class BankAccount{
    #balance
    constructor(owner, balance = 0)
    {
        this.owner = owner,
        this.#balance = balance
        this.transactions = []
    }
    deposit(amount)
    {
        if (amount <= 0) {
            console.log("Amount 0 manfiy bulishi mumkin emas")

        }
        else {
            this.#balance = this.#balance + amount
            let date = new Date()
            let d = date.toLocaleString()
            this.transactions.push(
                `owner: ${this.owner}, deposit: ${amount}, Date: ${d}`)
        }
    }
    withdraw(amount)
    {
        let date = new Date()
        let d = date.toLocaleString()
        if (amount <= 0)
        {
            console.log("Amount 0 manfiy bulishi mumkin emas")
          
        }
        else if (amount <= this.#balance)
        {
            this.#balance = this.#balance - amount
            this.transactions.push(
                `owner: ${this.owner}, deposit: ${amount}, Date: ${d}`)
        }
        else {
            console.log(`Balance da yetari mabulag mavjud emas`)
        }
    }
    getBalance()
    {
        return this.#balance
    }
    getTransactions()
    {
        return this.transactions
    }
}

const account = new BankAccount("Ali", 1000)
account.deposit(500)
account.withdraw(300) 
console.log(account.getBalance())
console.log(account.getTransactions())