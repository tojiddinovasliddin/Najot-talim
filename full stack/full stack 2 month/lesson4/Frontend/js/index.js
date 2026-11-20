const user = document.querySelector(".channel")
const vide = document.querySelector(".iframes-list")
const search = document.querySelector(".search-btn")
const avatar = document.querySelector(".header-right")
const seach_btn = document.querySelector(".search-box")
let token = localStorage.getItem("token")
let avat = localStorage.getItem("img")
if (avat) {
    avatar.innerHTML += `  <a id="list" href="./admin.html">
                    <img class="avatar-img" src=${avat} alt="avatar-img" width="32px" height="32px">
                </a>`
}
else {
    avatar.innerHTML +=`<a id="list" href="./register.html">
                    <img class="avatar-img" src="./img/avatar.jpg" alt="avatar-img" width="32px" height="32px">
                </a>`
}
seach_btn.addEventListener("submit", async (el) => {
    el.preventDefault()
    const value = el.target.querySelector("#inputSearch").value.trim().toLowerCase()
    search_result(value)

});

const SpeechRecognition =
    window.SpeechRecognition || window.webkitSpeechRecognition;
const voices = new SpeechRecognition();
voices.lang = "en-US";
function voice() {;
    voices.start();
}
voices.onresult = (e) => {
   search_result(e.results[0][0].transcript);
};

async function getInfo() {
    let ms = await axios.get("https://n30-youtube-api-qys5.onrender.com/users")
    let arr = (ms.data.data)
    for (let i = 0; i < arr.length; i++) {
        let username = arr[i].username
        let image = arr[i].profileImg
        user.innerHTML += `<a href="#">
                            <img src=${image} alt="channel-icon"
                                width="30px" height="30px">
                            <span>${username}</span>
                        </a>`
    }

}
getInfo()

async function videos() {
    let vid = await axios.get("https://n30-youtube-api-qys5.onrender.com/files")
    let k = vid.data.data
    for (let i = 0; i < k.length; i++) {
        vide.innerHTML += `<li class="iframe">
            <video src=${k[i].viewFile} controls></video>
            <div class="iframe-footer">
                <img src=${k[i].user.profileImg} alt="channel-icon">
                <div class="iframe-footer-text">
                    <h2 class="channel-name">${k[i].user.username}</h2>
                    <h3 class="iframe-title">${k[i].videoInput}</h3>
                    <time class="uploaded-time">${k[i].data}</time>
                    <a class="download" href="${k[i].downloadLink}">
                        <span>${k[i].size} mb</span>
                    </a>
                </div>
            </div>
        </li>`
    }
}
videos()

async function search_result(ls){

    let vid = await axios.get("https://n30-youtube-api-qys5.onrender.com/files")
    let k = vid.data.data
    vide.innerHTML = ""
    for (let i = 0; i < k.length; i++) {
        if (k[i].videoInput.toLowerCase().includes(ls)) {
            vide.innerHTML += `<li class="iframe">
                <video src="${k[i].viewFile}" controls></video>
                <div class="iframe-footer">
                    <img src="${k[i].user.profileImg}" alt="channel-icon">
                    <div class="iframe-footer-text">
                        <h2 class="channel-name">${k[i].user.username}</h2>
                        <h3 class="iframe-title">${k[i].videoInput}</h3>
                        <time class="uploaded-time">${k[i].data}</time>
                        <a class="download" href="${k[i].downloadLink}">
                            <span>${k[i].size} mb</span>
                        </a>
                    </div>
                </div>
            </li>`
        }
    }
}
