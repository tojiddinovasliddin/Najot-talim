let a=963
let b=487
let c=847
let small=0
let big =0
if (a>b && a>c)
{
     big=a
}
else if (b>a && b>c)
{
    big=b
}
else
{
     big =c 
}
if (a<b && a<c)
{
     small=a
}
else if (b<a && b<c)
{
    small=b
}
else
{
     small=c 
}
console.log(big-small)
