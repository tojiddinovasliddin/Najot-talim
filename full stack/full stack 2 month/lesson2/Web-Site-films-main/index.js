let API_KEY = `dcea1fd7b3e65d34387ad6de7ef9cc5e`
const append = document.querySelector(".append")
let seach_name = document.querySelector("#search")
let num_page = document.querySelector(".title")
let average_score = document.querySelector("#score")
let min_year = document.querySelector("#min")
let max_year = document.querySelector("#max")

let searchs = [];

async function getInfo(data) {
    const arr = await fetch(`${data}`)
    const ms = await arr.json()
   return ms

}

function move_name(name){
    append.innerHTML = ""
    for (const el of name) {
        const div = document.createElement("div")
        div.className = "movie"
        div.innerHTML += `
            <img src="https://image.tmdb.org/t/p/w500${el.poster_path}" alt="${el.title}">
            <div class="movie-info">
                <h3>${el.title}</h3>
                <span class="orange">${el.vote_average}</span>
            </div>

            <span class="date">${el.release_date}</span>
        `
        append.append(div)
    }
}

async function top_movies(){
    const top_film = await getInfo(`https://api.themoviedb.org/3/movie/top_rated?api_key=${API_KEY}`)
    searchs = top_film.results
    move_name(top_film.results)



}

async function popular_movies() {
    const pop_film = await getInfo(`https://api.themoviedb.org/3/movie/popular?api_key=${API_KEY}`)
    searchs = pop_film.results
    move_name(pop_film.results)


}

async function upcoming_movies() {
    const upcoming_film = await getInfo(`https://api.themoviedb.org/3/movie/upcoming?api_key=${API_KEY}`)
    searchs = upcoming_film.results
    move_name(upcoming_film.results)

}

function seach_btn() {
    let s = seach_name.value.toLowerCase()
    let ave = average_score.value
    let maxx = Number(max_year.value)
    let minn = Number(min_year.value)

    let result = searchs

    if (s) {
        result = result.filter(movie =>
            movie.title.toLowerCase().includes(s)
        )
    }

    if (ave) {
        result = result.filter(el => {
            return el.vote_average >= ave
        })
    }

    if (minn || maxx) {
        let year_list = search_year(minn || 0, maxx || 9999)
        result = result.filter(el => year_list.includes(el.release_date))
    }
    move_name(result)
}

function search_year(mins, maxs) {
    let res = []
    let ans = []
    let res_year = []
    for (let i = 0; i < searchs.length; i++) {
        res.push(searchs[i].release_date)
        let split = res[i].split("-")
        ans.push(split)

    }
    for (let i = 0; i < searchs.length; i++) {
        if (ans[i][0] >= mins && ans[i][0] <= maxs) {
            res_year.push(res[i])
        }
    }
    return res_year
}

function next() {

    let k = num_page.textContent
    if (k == "1")
    {
         num_page.textContent="2"
        popular_movies()
    }
    else if (k == "2")
    {
        num_page.textContent = "3"
            upcoming_movies()
    }
    else {
        num_page.textContent = "1"
        top_movies()
    }
}
function prev() {

    let k = num_page.textContent

    if (k == "2") {
        num_page.textContent = "1"
        top_movies()
    }
    else if (k=="3") {
        num_page.textContent = "2"
        top_movies()
    }
    else{
        num_page.textContent = "3"
        popular_movies()
    }
}



!(function () {
    top_movies()

})();
