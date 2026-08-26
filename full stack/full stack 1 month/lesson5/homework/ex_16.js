let arr = []
let num = 5
for (let i =0; i<num;i++)
{
    arr.push(Math.floor(Math.random()*100))
}
console.log(arr)

let l = 0
let r = arr.length - 1       

while(l <= r) 
{
    if(l === r) 
    {           
        console.log(arr[l])
        break
    }
    console.log(arr[l])
    console.log(arr[r])  
    l += 1
    r -= 1
}

