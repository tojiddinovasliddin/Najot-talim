let ans = "18fF."
let raqam = 0
let belgi = 0
let harf = 0
for (let i = 0; i<ans.length;i++)
{
    if(ans[i]>=0 && ans[i]<=9)
    {
        raqam+=1
    }
    else if(ans[i]>="A" && ans[i]<="Z" || ans[i]>="a" && ans[i]<="z")
    {
       harf+=1
    }
    else
    {
        belgi+=1
    }
}
console.log(`Raqam: ${raqam}, Belgi: ${belgi}, Harf: ${harf}`);