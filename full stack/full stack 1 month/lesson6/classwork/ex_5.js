let s = "A man a plan a canal Panama"
s = s.toUpperCase()
console.log(s)
s = s.split("")
k = s.reverse()
k = k.join("")
cnt = 0
for (let i = 0; i<s.length;i++)
{
    if(s[i] ==k[i])
    {
        cnt+=1
    }
}
if(cnt==s.length)
{
    console.log(true)
}
else
{
    console.log(false)
}