const username = document.querySelector("#usernameInput")
const password = document.querySelector("#passwordInput")
const message = document.querySelector("#errorMessage")


async function login() {
    console.log("d")
    let ms = await axios.post("https://n30-youtube-api-qys5.onrender.com/login", {
        username: username.value,
        password: password.value
    })
    if (ms.data.status == 200) {
        window.location = "./index.html"
        window.localStorage.setItem("token", ms.data.token)
        window.localStorage.setItem("img", ms.data.data.profileImg)
    }
    else {
        message.textContent = "invalid username or password"

    }

}
