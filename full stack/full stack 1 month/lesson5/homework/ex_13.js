let n = 5
let arr =[]

for (let i = 1; i<=n; i++)
{
    arr.push(i)
}
let cnt = 0
for (let i = 0; i <arr.length; i++)
{
    if (arr[i] %2 == 1)
    {
       console.log(arr[i])
        cnt+=1
    }
}

console.log(`Cnt: ${cnt}`)
