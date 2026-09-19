let key = "SENING_API_KEY"

async function getInfo() {
    const arr = await fetch(
        `https://api.openweathermap.org/data/2.5/weather?q=Tashkent&appid=${key}`
    )

    const ms = await arr.json()
    console.log(ms)
}

getInfo()
