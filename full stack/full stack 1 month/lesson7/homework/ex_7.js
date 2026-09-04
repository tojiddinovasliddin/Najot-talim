let text = "javascript";
let s = text.split("")
text = text.toLowerCase()
let arr = new Set(text)
let ms = [...arr]
console.log(ms.join(""))
console.log(arr.size)
let belgi;
for (let i = 0; i < s.length; i++)
{
    if (s[i] != ms[i])
    {
        belgi = s[i]
        break
    }
}
console.log(belgi)

