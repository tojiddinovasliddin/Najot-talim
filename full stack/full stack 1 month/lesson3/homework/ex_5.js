function rec(a)
{
    if (a<10)
    {
        return 1
    }
    return rec(Math.floor(a/10)) + 1
}

console.log(rec(1244))