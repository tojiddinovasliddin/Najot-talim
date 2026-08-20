function check(ms)
{
   let arr={}
    for(let i=0;i<ms.length;i++)
    {
        if (ms[i] in arr)
            {
                arr[ms[i]]+=1   
            }
        else
        {
                arr[ms[i]]=1
        }
    }
    return arr
}

let sonlar = [1, 2, 2, 3, 1, 4, 2, 1];
console.log(check(sonlar))