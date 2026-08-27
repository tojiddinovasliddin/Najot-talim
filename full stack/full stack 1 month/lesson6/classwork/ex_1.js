arr = [1,2,3,1,5,5,5,4,5,7,5,3]
ms ={}
for (let i =0;i<arr.length;i++)
{
    let s = arr[i]
    if(s in ms)
    {
        ms[s]+=1
    }
    else
    {
        ms[s]=1
    }
}
console.log(ms)
 let a = Object.keys(ms).length; 

let max = 0
var s;
let min = 123
let cnt=0
var d;
for (let i = 1; i<a;i++)
{
    if (ms[i]>max)
    {
        max = ms[i]
        s = i
    }
    else if(ms[i]< min)
    {
        min =ms[i]
        d = i
    }
}
console.log(s,max)
console.log(d,min)