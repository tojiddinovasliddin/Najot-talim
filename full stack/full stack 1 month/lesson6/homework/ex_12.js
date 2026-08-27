let n = 7
let arr= []
let k  = 2
let l = 5
for (let i = 0; i<n;i++)
{
    arr.push(Math.floor(Math.random()*100))
}
console.log(arr)
let total = 0
for(let i = 0; i<n;i++)
{
    if(i>k && i<=l+1)
    {
        total+=arr[i]
    }
}
console.log(total)