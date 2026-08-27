let S = "Dunyo seni togangmas!"
let arr = S.split("")
let ms={}
let max = 0
let name_max = 0
let min = 0
let name_min = 0
for (let i = 0;i<arr.length;i++)
{
    let a = arr[i]
    if(a in ms)
    {
       ms[a]+=1
    }
    else
    {
        ms[a]=1
    }
}
let cnt = 0
let values = Object.values(ms)
max = Math.max(...values)
min = Math.min(...values)
for (let i = 0; i<values.length;i++)
{
    if (values[i]==max)
    {
      cnt+=1
    }
}
let keys = Object.keys(ms)

for (let i = 0; i < keys.length; i++) {
    let v = (ms[keys[i]])
    
    let k =keys[i]
   if(v == max)
   {
        name_max = k
   }
   else if (v == min)
   {
        name_min = k
   }
}
if(cnt == 1)
{
    console.log(name_max,max)
}
else
{
    console.log(min, name_min)
}


