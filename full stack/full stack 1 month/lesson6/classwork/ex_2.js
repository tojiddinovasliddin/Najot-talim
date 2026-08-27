let s = "sa12lom24"
let cnt = 0
for (let i = 0; i<s.length;i++)
{
    if(Number.isInteger(Number(s[i])) == true)
    {
        cnt+=1
    }
}
console.log(cnt)