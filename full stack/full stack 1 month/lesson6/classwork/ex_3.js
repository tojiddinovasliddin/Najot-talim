let s = "sa12#2#!4"
let num = 0
let string = 0
let belgi = 0
for (let i = 0; i<s.length;i++)
{
    if(Number.isInteger(Number(s[i])) == true)
    {
        num+=1
    }
    else if(s[i] >='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
    {
        string+=1
    }
    else
    {
        belgi+=1
    }
}
console.log(num)
console.log(string)
console.log(belgi)