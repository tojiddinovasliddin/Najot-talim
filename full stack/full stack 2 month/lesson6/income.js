const fs = require("fs")
let [, ,name, amount, purpose,extra] = process.argv
if (name == "POST") {
    let data = JSON.parse(fs.readFileSync("income.json", "utf-8"))
    data.push({
    id: data.length + 1,
    amount: amount,
    purpose: purpose
    })
    fs.writeFileSync("income.json", JSON.stringify(data, null, 4))

}
else if (name == "DELETE") {
    let data = JSON.parse(fs.readFileSync("income.json", "utf-8"))
    data = data.filter(el => el.id != amount)
    fs.writeFileSync("income.json", JSON.stringify(data, null, 4))
}
else if (name == "PUT") {
    let data = JSON.parse(fs.readFileSync("income.json", "utf-8"))
    for (const el of data) {
        if (el.id == amount) {
            el.amount = purpose
            el.purpose = extra
        }
    }
    fs.writeFileSync("income.json", JSON.stringify(data, null, 4))
}
else if (name == "GET") {
    let data = JSON.parse(fs.readFileSync("income.json", "utf-8"))
    console.table(data)
}
