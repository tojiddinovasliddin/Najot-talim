function check(ms)
{
    let arr=[]
    for(let i=0;i<ms.length;i++)
    {
        let cnt = 0
            for(let j=0;j<ms.length;j++)
            {
                    if (ms[i]==ms[j])
                    {
                        cnt+=1
                    }
            }
            if (cnt==1)
            {
                arr.push(ms[i])
            }
    }
    return arr
}

let sonlar = [4, 2, 7, 2, 9, 4, 5, 7, 1];
console.log(check(sonlar))
