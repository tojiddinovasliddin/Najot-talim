function check(n) 
{
    let s = n.toUpperCase()
    s = s.split("")
    let ms =[]
    for(let i = 0; i<s.length;i++)
    {
        if(s[i] != " ")
        {
            ms.push(s[i])
        }
    }
   ms = ms.sort()
    return ms.join("")
}

let a = "William Shakespeare"
let b = "I am a weakish speller"
let c = check(a)
let d = check(b)
if(c == d)
{
    console.log(true)
}
else
{
    console.log(false)
}