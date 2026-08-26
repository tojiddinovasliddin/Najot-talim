let arr = [1,1]
let n = 2

for (let i = 2; i<=n; i++)
{
    arr.push(arr[i-1] + arr[i-2])
}
console.log(arr)