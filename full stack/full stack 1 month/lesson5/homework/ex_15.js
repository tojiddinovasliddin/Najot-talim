let n = 5
let arr = []
for (let i = 0; i<n; i++)
{
    arr.push(Math.floor(Math.random()*100))
}
console.log(arr)
let ms =[]
for (let i = 0; i<arr.length;i++)
{
    if(i%2==0)
    {
        ms.push(arr[i])
    }
}
arr = arr.reverse()
for (let i = 0; i<arr.length;i++)
{
    if(i%2==1)
    {
        ms.push(arr[i])
    }
}
console.log(ms)