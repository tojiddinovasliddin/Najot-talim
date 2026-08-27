function check(ms,d)
{
    ms = ms.split("")
    let arr = []
    for(let i = 0; i< ms.length;i++)
    {
        let a = ms[i]
        if(a !=d)
        {
            arr.push(a)
        }
       
    }
    return arr.join("")
}
let  S = "Salom Dunyo!"
let k = 'o'
S = check(S,k)
console.log(S)