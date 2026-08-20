function rev(a)
{
    let sum
    if (a<=0)
    {
        return 0
    }
    if (a%2==0)
    {
        return a+ rev(a-2)
    }
   else
   {
        return rev(a-1)
   }
}
console.log(rev(13))