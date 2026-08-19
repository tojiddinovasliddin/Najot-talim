let a = 15
let b = 20
let sum = a+b
if ( sum > 0 && sum <24)
{
    console.log(sum)
}
else 
{
    if (a>b)
    {
        console.log(24-(a+b))
    }
    else
        b=24-(a+b)
        b=b*(-1)
        console.log(b)
}