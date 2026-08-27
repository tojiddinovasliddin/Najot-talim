let S = "example"
let k = 2
let s = 'k'
let arr = S.split('')
for(let i = 0; i< arr.length;i++)
{
    if (i%k == 0)
    {
    arr[i] = s
      
    }
}
S = arr.join("")
console.log(S)