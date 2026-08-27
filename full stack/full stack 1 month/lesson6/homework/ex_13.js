let arr = [8,6,5,3,2,1]
let aralash = 0
let kamayuvchi = 0
let teng = 0
let osuvchi = 0
for(let i = 0; i<arr.length;i++)
{
    if(arr[i] < arr[i+1])
    {
        osuvchi+=1
    }
    else if(arr[i]>arr[i+1])
    {
        kamayuvchi+=1
    }
    else if(arr[i]==arr[i+1])
    {
        teng+=1
    }
    else
    {
        aralash+=1
    }
}
if(arr.length-1 == osuvchi)
{
    console.log("Osuvchi")
}
else if(arr.length-1 == teng)
{
    console.log("Teng")
}
else if(arr.length-1 == kamayuvchi)
{
    console.log("Kamayuvchi")
}
else
{
    console.log("Aralash")
}