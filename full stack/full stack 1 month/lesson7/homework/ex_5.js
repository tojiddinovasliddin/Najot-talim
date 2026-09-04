const messages = [
    { userId: 1, text: "Salom" },
    { userId: 2, text: "Hi" },
    { userId: 1, text: "Qalaysan?" },
    { userId: 3, text: "Hello" },
    { userId: 2, text: "Good" },
    { userId: 1, text: "Yaxshi" }
];

let sort_by_user_id = new Map();

for (let message of messages) {
    if (sort_by_user_id.has(message.userId)) {
        sort_by_user_id.get(message.userId).push(message.text)
    } else {
        sort_by_user_id.set(message.userId, [message.text])
    }
}

console.log(sort_by_user_id)
let user_name;
let most_message = 0
let ms = []
for (let [key,value] of sort_by_user_id)
{
    if (value.length > most_message)
    {
        most_message = value.length
        user_name = key
    }
    if (value.length >= 2)
    {
        ms.push(key)
    }
}
console.log(`Eng kup message yuborga user: ${user_name}`)
console.log(`Kamida 2 ta message yubolgan userlar: ${ms}`)
let arr = []
for (let [key,value]of sort_by_user_id)
{
    arr.push([`ID: ${key}, Count: ${value.length}]`])
}
console.log(arr)
