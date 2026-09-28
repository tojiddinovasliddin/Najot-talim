const fs = require("fs")
let [, ,name, amount, purpose,extra] = process.argv
if (name == "POST") {
    let ms = JSON.parse(fs.readFileSync("outcome.json", "utf-8"))
    ms.push({
        id: ms.length + 1,
        amount: amount,
        purpose: purpose
    })
    fs.writeFileSync("outcome.json", JSON.stringify(ms, null, 4))

}
else if (name == "DELETE") {
    let ms = JSON.parse(fs.readFileSync("outcome.json", "utf-8"))
    ms = ms.filter(el => el.id != amount)
    fs.writeFileSync("outcome.json", JSON.stringify(ms, null, 4))
}

else if (name == "PUT") {
    let ms = JSON.parse(fs.readFileSync("outcome.json", "utf-8"))
    for (const el of ms) {
        if (el.id == amount) {
            el.amount = purpose
            el.purpose = extra
        }
        fs.writeFileSync("outcome.json", JSON.stringify(ms, null, 4))
    }

}
else if (name == "GET") {

    let ms = JSON.parse(fs.readFileSync("outcome.json", "utf-8"))
    console.table(ms)
}



