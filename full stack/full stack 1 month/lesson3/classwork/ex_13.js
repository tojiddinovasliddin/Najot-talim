function juftmi(a)
{
    if (a%2==0)
    {
        return true
    }
    else
    {
        return false
    }
}
function arr(ms)
{
    let j=0
    let arr=[]
    let cnt = 0
    while(j<ms.length)
    {
        if (juftmi(ms[j])== true)
        {
            cnt+=1
            arr.push(ms[j])
        }
        j+=1
    }
    console.log(`Juft sonlar: ${cnt} ta `)
    console.log(arr.join(" "))
}


let sonlar = [3, 8, 12, 5, 7, 10, 9];
arr(sonlar)
