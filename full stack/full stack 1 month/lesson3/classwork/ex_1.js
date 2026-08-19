function check(a)
{
    let sum = 0
    while(a>0)
    {
        let b=a%10
        sum+=b
        a=Math.floor(a/10)
    }
    return checks(sum)
}
function checks(a)
{
    if (a%2==0)
    {
        return "juft"
    }
    else 
    {
        return "toq"
    }
}

let num = 111
console.log(check(num))