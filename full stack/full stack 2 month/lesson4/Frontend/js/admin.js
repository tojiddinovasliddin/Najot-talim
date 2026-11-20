const adminWrapper = document.querySelector(".admin-wrapper")
const videoForm = document.querySelector("#videoForm")

function logout() {
    window.localStorage.removeItem("token")
    window.location = "./login.html"
}

let token = window.localStorage.getItem("token")
if (!token) {
    window.location = "login.html"
}
async function getVideo() {
    adminWrapper.innerHTML= null
    let myvideos = await axios.get("https://n30-youtube-api.onrender.com/files/my", {
        headers: {
            "Authorization": "Bearer " + token
        }
    })
    for (const video of myvideos.data.data) {
        adminWrapper.innerHTML += `<ul id="videosList" class="videos-list video-item">
                    <video controls="true" src="${video.viewFile}"></video>
                    <p class="content" contenteditable="true">${video.videoInput}</p>
                    <img onclick="delete_video(${video.fileId})" class="delete-icon" src="./img/delete.png" width="25">
                </ul>`
    }

}

videoForm.addEventListener("submit", async(el) => {
    el.preventDefault()
    let formData = new FormData()
    formData.append("videoInput",videoInput.value)
    formData.append("file", uploadInput.files[0])
    let res = await axios.post("https://n30-youtube-api-qys5.onrender.com/files",formData,{
        headers: {
            "Authorization": "Bearer " + token
        }
    })
    if (res.data.status == 200) {
        getVideo()
    }
})

async function delete_video(id) {
    let res = await axios.delete("https://n30-youtube-api-qys5.onrender.com/files", {
        headers: {
            "Authorization": "Bearer " + token
        },
        data: {
            fileId: id
        }
    })
    if (res.data.status == 200)
    {
        getVideo()
    }
}


getVideo()
