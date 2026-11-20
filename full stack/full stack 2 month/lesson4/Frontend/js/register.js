const username = document.querySelector("#usernameInput")
const password = document.querySelector("#passwordInput")
const file_name = document.querySelector("#uploadInput")
const message = document.querySelector("#errorMessage")
const regist_btn = document.querySelector("#registerForm")

regist_btn.addEventListener("submit", k)

async function k(e) {
    e.preventDefault()

        let user = username.value
        let pass = password.value
        let file_names = file_name.files[0]
        let formdata = new FormData()
        formdata.append("username", user)
        formdata.append("password", pass)
        formdata.append("file", file_names)
        let res = await getInfo(formdata)
        window.localStorage.setItem("token", res.data.token)
        window.localStorage.setItem("img", res.data.data.profileImg)
    if (res.data.status == 200) {
        window.location="./index.html"
        }
}

async function getInfo(ls) {
    return await axios.post("https://n30-youtube-api-qys5.onrender.com/register", ls)
}
