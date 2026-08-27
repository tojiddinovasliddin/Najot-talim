let text = "HELLO WORLD";
let S = "ds_forrest"
let arr = S.split("")
let total = 0 
for(let i = 0; i<arr.length;i++)
{
  let belgi = arr[i]
  let check = belgi.charCodeAt(0)
  total+=check
}
mid = total/arr.length
console.log(mid.toFixed(3))
