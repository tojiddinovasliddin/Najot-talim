let arr = []
let ms =[]
let n = 12
for (let i = 0; i<n; i++)
{
    arr.push(i)     
    if(i%2==0)
    {
        ms.push(arr[i])
    }
}
console.log(arr)
console.log(ms.reverse())
console.log(`Cnt: ${ms.length}`)