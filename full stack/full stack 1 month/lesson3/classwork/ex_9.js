function juft(ms)
{
    let j=0
    let sum=0
    while(j<ms.length)
    {
        if (ms[j] % 2 == 0)
        {
            sum+=ms[j]
        }   
        j+=1
    }
    return sum
}

let sonlar = [12, 7, 8, 3, 20, 15, 6, 9];
console.log(juft(sonlar))