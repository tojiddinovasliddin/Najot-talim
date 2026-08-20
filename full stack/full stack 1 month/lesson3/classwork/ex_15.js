let ishchilar = [
  { ism: "Aziz", lavozim: "dasturchi", oylik: 8000000 },
  { ism: "Malika", lavozim: "dizayner", oylik: 6000000 },
  { ism: "Jasur", lavozim: "dasturchi", oylik: 9500000 },
  { ism: "Feruza", lavozim: "menejer", oylik: 12000000 },
  { ism: "Bekzod", lavozim: "dasturchi", oylik: 7000000 }
];

let workers = ishchilar.filter(worker => {
    return worker.lavozim == "dasturchi"})
console.log(workers)

let worker = workers.map((workers) => {
    return `${workers.ism} --- ${workers.oylik * 1.1}`});
console.log(worker);