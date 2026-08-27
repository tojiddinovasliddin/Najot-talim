let harf = "a"
if (harf.charCodeAt(0)>=97 && harf.charCodeAt(0)<=122 && harf.length === 1)
{
    let s = harf.charCodeAt(0)- 32
    console.log(String.fromCharCode(s))
}
else
{
    console.log("Harf kiriting")
}