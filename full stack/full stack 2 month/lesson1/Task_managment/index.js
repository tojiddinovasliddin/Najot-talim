const add = document.querySelector(".add_btn")
const tit = document.querySelector(".task_managment")
const list = document.querySelector(".toList")
let ms = []
tit.onkeydown = function(event){
    if (event.key == "Enter")
    {
       add.click()
    }
}
add.addEventListener("click",() => {
    if (tit.value.length>0 && tit.value.length < 20)
    {
        let date = new Date()
        let today = date.toLocaleString()
        ms.push(`task name: ${tit.value}, time: ${today}`)
        localStorage.setItem("task_managment", JSON.stringify(ms))
        const li = document.createElement("li")
        const delet = document.createElement("button")
        const update = document.createElement("button")
        update.textContent = "✏️"
        delet.textContent = "❌"
        li.textContent = `task name: ${tit.value}, time: ${today}`
        li.append(update,delet)
        list.append(li)
        delet.addEventListener("click", () => {
         li.remove()

        })
        tit.value = null

        update.addEventListener("click", () => {
            if (update.textContent === "✏️") {
                li.setAttribute("contenteditable", true)
                update.textContent = "✅"
            } else {
                li.setAttribute("contenteditable", false)
                update.textContent = "✏️"
            }
        })
    }
})
