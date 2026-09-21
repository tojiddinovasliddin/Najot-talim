// const amount = document.querySelector(".amount")
const input = document.querySelector(".input")
const money1 = document.querySelector("#money1")
const money2 = document.querySelector("#money2")
const res_input = document.querySelector(".input_money")
const res_output = document.querySelector(".output_money")

async function change() {
    let arr = (Number(input.value))
    const price = await axios.get("https://open.er-api.com/v6/latest/USD")
    let file_info = price.data.rates
    let m1 = money1.value
    let m2 = (money2.value)
    m1 = file_info[m1]
    m2 = file_info[m2]
    let sum = arr / m1 * m2
    res_input.textContent = `${arr} ${money1.value}`
    res_output.textContent = `${sum} ${money2.value}`
}


