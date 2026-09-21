const input = document.querySelector(".input")
let ms = []
let ress = ["+","-","/","*"]
function getInfo(a) {
    ms.push(a)
    if (ms[0] == "/" || ms[0] == "*" || ms[0] == "+")
    {
        ms.pop()
    }
    for (let i = 0; i < ms.length;i++)
    {
        if (ress.includes(ms[i]) && ress.includes(ms[i+1]))
        {
            ms.splice(i + 1, 1)
        }
    }
    let arr = ms.join("")
    input.textContent = arr

}

function delet() {
    let k = ms.pop()
    input.textContent = ms.join("")
}
function clears() {
    ms = []
    input.textContent = "0"
}

function devide() {
    getInfo("/")
}

function seven() {
getInfo(7)
}
function eight()

{
    getInfo(8)
}
function night()
{
    getInfo(9)
}
function multly()
{
    getInfo("*")
}

function four() {
    getInfo(4)
}
function five() {
    getInfo(5)
}
function six() {
    getInfo(6)
}
function minus() {
    getInfo("-")
}

function one() {
    getInfo(1)
}
function two() {
    getInfo(2)
}
function three() {
    getInfo(3)
}
function add()
{
    getInfo("+")
}

function zero() {
    getInfo(0)
}
function comma() {
    getInfo(".")
}



function result()
{

    let k = ms.join("")
    let sum = eval(k)
    ms =[sum]
    input.textContent = sum

}
