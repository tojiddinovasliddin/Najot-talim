fs = require("fs")
let outcome = JSON.parse(fs.readFileSync("outcome.json", "utf-8"))
let income = JSON.parse(fs.readFileSync("income.json", "utf-8"))
let income_sum = income.reduce((tot, s) => {
    return tot+=Number(s.amount)
}, 0)
let outcome_sum = outcome.reduce((tot, s) => {
    return tot += Number(s.amount)
}, 0)
console.log(`Balance: ${income_sum - outcome_sum}`)
