let number = 141
let number_1 = number
let check = 0
let j = String(number).length
while(j>0)
{
    let a = number % 10
    check = check * 10 + a
    number = Math.floor(number / 10)
    j-=1
}
if (number_1 == check)
{
    console.log(true)
}
else
{
    console.log(false)
}