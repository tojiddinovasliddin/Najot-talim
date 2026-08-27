function capitalize(ms)
{
    for (let i = 0; i<ms.length;i++)
    {
       ms[i] = ms[i][0].toUpperCase() + ms[i].slice(1);

      
    }
    return ms.join(" ")
}

let s = "salom dunyo qalaysiz"
let arr = s.split(" ")
console.log(capitalize(arr))
