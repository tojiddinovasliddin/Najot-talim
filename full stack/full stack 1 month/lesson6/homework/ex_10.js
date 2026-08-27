function check(ms)
{
  return ms.sort()
}
function same(arr,arr1)
{
    let ms = []
    for(let i = 0;i<arr.length;i++)
    {
        for(let j = 0; j<arr1.length;j++)
        {
            if(arr[i] == arr1[j])
            {
    
                ms.push(arr1[j])
                break
            }
        }
    }   
    return ms

}
function result(ms)
{
    arr = []
    for (let i = 0; i<ms.length;i++)
    {
        if(!arr.includes(ms[i])) 
        {
            arr.push(ms[i]);
        }

    }
    return arr.length  
}

let a = "robocontest"
let b = "codeforces"
 a = a.split("")
b = b.split("")
let cnt = 0
let a1= check(a)
let b1 = check(b)
let ans = same(a1,b1)
let res = result(ans)
console.log(res)