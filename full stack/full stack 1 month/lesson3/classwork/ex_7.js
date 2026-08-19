function check(ms)
{
    cnt=0
    a=ms.length
    for(let i=0;i<a;i++)
    {
        if (ms[i]=='0' || ms[i]==1 || ms[i]==2 || ms[i]==3
            || ms[i]==4 || ms[i]==5 || ms[i]==6 || ms[i]==7
            || ms[i]==8 || ms[i]==9 )
        {
            cnt+=1
        }
    }
    if (a>=8 && cnt>0)
    {
        return true
    }
    else
        return false

}

console.log(check("Asliddin2005"))