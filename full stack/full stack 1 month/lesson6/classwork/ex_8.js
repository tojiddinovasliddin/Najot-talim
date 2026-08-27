/*Quyidagi array ichidan ikkinchi eng katta unique sonni topadigan funksiya yoz:
const arr = [12, 5, 8, 20, 20, 15, 12, 18];

Natija:
18

Shartlar:
sort() ishlatma
Math.max() ishlatma
Set ishlatma
funksiya ko‘rinishida yoz
*/
function check(ms)
{
    let max = ms[0]
    for(let i = 0; i<ms.length;i++)
    {
        if(ms[i]>max)
        {
            max = ms[i]
        }
    }
    return max
}
function checks(ms,max){
    let arr = []
   
    for(let i = 0; i <ms.length; i++)
    {
        let a = ms[i]
        if(a != max)
        {
            arr.push(a)
          
        }

    }
return arr
}

let arr = [12, 5, 8, 20, 20, 15, 12, 18];
let ls = check(arr)
let ans = checks(arr,ls)
let res = check(ans)
console.log(res)