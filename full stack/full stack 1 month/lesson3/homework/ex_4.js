function rec(a,b)
{
    if (b==0)
    {
        return 1
    }
    return a * rec(a,b-1)

}
console.log(rec(2,3))