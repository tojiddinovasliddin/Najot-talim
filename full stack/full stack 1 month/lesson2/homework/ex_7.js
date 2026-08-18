let number = 123321;

let str = String(number);
let len = str.length;

if (len !== 6)
{
    console.log("Sizda omadli chipta mavjud emas");
} 
else 
{
    let sum1 = 0;
    let sum2 = 0;

    for (let i = 0; i < 3; i++) 
    {
        sum1 += Number(str[i]);
        sum2 += Number(str[i + 3]);
    }

    if (sum1 === sum2) 
    {
        console.log("YES");
    } else 
    {
        console.log("NO");
    }
}