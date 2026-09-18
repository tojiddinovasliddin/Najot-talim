const input = document.querySelector(".input")
const btn_add = document.querySelector(".add_btn")
const list = document.querySelector(".list")
let ms = []

input.onkeydown = function (el){
    if (el.key == "Enter")
    {
        btn_add.click()
    }
}
btn_add.addEventListener("click", () =>
{
    if (input.value.length > 0 && input.value.length < 20)
    {

        ms.push(input.value)
        const li = document.createElement("li")
        const btn_delete = document.createElement("button")
        const btn_edit = document.createElement("button")
        btn_delete.textContent = "delete"
        btn_edit.textContent = "edit"
        li.textContent = input.value
        li.append(btn_edit, btn_delete)
        list.append(li)
        input.value = ""
        input.focus()
        localStorage.setItem("student_list",JSON.stringify(ms))

        btn_delete.addEventListener("click", () => {
            li.remove()
        })
        btn_edit.addEventListener("click",() => {
            if (btn_edit.textContent == "edit")
            {
                li.setAttribute("contenteditable",true)
                btn_edit.textContent = "save"
            }
            else
            {
                li.setAttribute("contenteditable", false)
                btn_edit.textContent = "edit"
            }
        })


    }

})


