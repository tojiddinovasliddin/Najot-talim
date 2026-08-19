function check(a)
{
    let num=0
    while(a>0)
    {
        num=num*10+a%10
      a=Math.floor(a/10)
    }
    return num
}
console.log(check(1234))

