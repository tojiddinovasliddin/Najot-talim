let number = 12579
let cnt = 0
let len=String(number).length
if(Number(len) % 2 == 0)
{
    console.log("No")
}
else
{
    while(number>0)
    {
        let a=number%10
        if(a % 2 == 1)
        {
            cnt+=1
        }
       number=Math.floor(number/10)
    }
}
if (cnt==len)
{
    console.log("Yes")
}
else
{
    console.log("No")
}