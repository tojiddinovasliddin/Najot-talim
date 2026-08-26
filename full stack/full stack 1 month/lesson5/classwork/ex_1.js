const students = [
    { name: "Ali", score: 85, subject: "Math" },
    { name: "Vali", score: 45, subject: "Physics" },
    { name: "Guli", score: 92, subject: "Math" },
    { name: "Dilnoza", score: 60, subject: "Physics" },
    { name: "Sardor", score: 78, subject: "Math" },
];

/*et filter = students.filter(student => {
    return student.score>=60})
   console.log(filter)
 let map = filter.map((student) =>{
    return student.name })
    console.log(map)
let  avg = students.reduce((total,student) => {
        return total+=student.score },0);
    console.log(avg)
let mid = avg/students.length
    console.log(`Mid: ${mid}`)

let sort = students.sort((a,b) => a.score-b.score)
    let ms1= []
    ms1.push(sort[sort.length-1])
    ms1.push(sort[0])
    minus = ms1.reduce((a,b) => 
    { return a.score - b.score })

   // console.log(minus)
*/
   let ms ={}
    let cnt=0
    let s = 0 
    for (let i = 0; i<students.length;i++)
        {
             var subject = students[i].subject;
             var score = students[i].score;
            
             if(!(subject in ms))
            {
                ms[subject]=score
                cnt+=1
            }
            else
            {
                ms[subject]+=score
                s+=1
            }
        }
let nat = Object.entries(ms);

for (let [subject, score] of nat) {
    let count = students.filter(student => student.subject === subject).length;
    let average = score / count;
    console.log(`${subject}: ${average}`)}