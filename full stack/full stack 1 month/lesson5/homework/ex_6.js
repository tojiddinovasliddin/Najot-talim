let arr = []
let num = 4
let cnt = 0
let one = 1
arr.push(1)
while(true)
{
    if (cnt<num-1)
    {
        one+=2
       arr.push(one)
       cnt+=1
    }
    else
    {
        break
    }
}
console.log(arr)