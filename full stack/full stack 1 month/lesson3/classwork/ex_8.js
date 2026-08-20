function isPrime(a)
{
    let cnt=0
    for (let i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            cnt+=1
        }
    }
    if (cnt==2)
    {
       return true
    }
    else
    {
        return false
    }
}

function check(ms)
{
    let arr=[]
    let j=0
    while(j<ms.length)
    {
        if (isPrime(ms[j])==true)
            {
                arr.push(ms[j])
            }

     j+=1        
    }
    return arr
}

function checks(ms)
{
    let arr=[]
    let j=0
    while(j<ms.length)
    {
        if (isPrime(ms[j])==false)
            {
                arr.push(ms[j])
            }
    
     j+=1        
    }
    return arr
}



let arr=[4, 7, 10, 2, 15, 3, 8]
let ms=check(arr)
let ms1=checks(arr)
console.log(`Primes: ${ms}`)
console.log(`Not prmise: ${ms1}`)