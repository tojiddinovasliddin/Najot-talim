let harf = "Z"
if (harf.charCodeAt(0)>=65 && harf.charCodeAt(0)<=90 && harf.length === 1)
{
    let s =harf.charCodeAt(0)+32
    console.log(String.fromCharCode(s))
}
else
{
    console.log("Harf kiriting")
}