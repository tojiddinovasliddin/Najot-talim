class BankAccount{
    constructor(owner, balance)
    {
        this.owner = owner
        this.balance = balance
    }
    deposit(amount)
    {
        this.balance = this.balance + amount
        return this.balance
    }
    withdraw(amount)
    {
        if (amount <= this.balance)
        {
            this.balance = this.balance - amount
            return this.balance
        }
        else
        {
            return `Mabilag yetari emas`
        }
    }
    getBalance()
    {
        return this.balance
    }
}
const acc = new BankAccount("Ali", 100);
acc.deposit(50);
acc.withdraw(30)
console.log(acc.getBalance());