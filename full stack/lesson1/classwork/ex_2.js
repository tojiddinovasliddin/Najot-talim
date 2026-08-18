let cnt=0
let son=10
while(son>1)
{
    if (son%2==0)
    {
        cnt+=1
        son=son/2
    }
    else
    {
        son+=1
        cnt+=1
    }
}
console.log(cnt)