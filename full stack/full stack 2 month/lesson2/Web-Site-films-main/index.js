let API_KEY = `dcea1fd7b3e65d34387ad6de7ef9cc5e`
const append = document.querySelector(".append")
let seach_name = document.querySelector("#search")
let num_page = document.querySelector(".title")
let average_score = document.querySelector("#score")
let min_year = document.querySelector("#min")
let max_year = document.querySelector("#max")

let searchs = [];
var tot_page= 0;
let now_page = 1
let now_page_name = "top_movies"

async function getInfo(data) {
    const arr = await fetch(`${data}`)
    const ms = await arr.json()
    tot_page = ms.total_pages
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

async function top_movies() {
    num_page.textContent = now_page
    now_page_name = "top_movies"
    const top_film = await getInfo(`https://api.themoviedb.org/3/movie/top_rated?api_key=${API_KEY}&page=${now_page}`)
    searchs = top_film.results
    move_name(top_film.results)


}

async function popular_movies() {
    num_page.textContent = now_page
    now_page_name = "popular_movies"
    const pop_film = await getInfo(`https://api.themoviedb.org/3/movie/popular?api_key=${API_KEY}&page=${now_page}`)
    searchs = pop_film.results
    move_name(pop_film.results)

}

async function upcoming_movies() {
    now_page_name = "upcoming_movies"
    num_page.textContent = now_page
    const upcoming_film = await getInfo(`https://api.themoviedb.org/3/movie/upcoming?api_key=${API_KEY}&page=${now_page}`)
    searchs = upcoming_film.results
    move_name(upcoming_film.results)

}

function seach_btn() {
    let s = seach_name.value.toLowerCase()
    let ave = average_score.value
    let maxx = Number(max_year.value)
    let minn = Number(min_year.value)

    let result = searchs

    if (s)
    {
        result = result.filter(movie =>
            movie.title.toLowerCase().includes(s)
        )
    }

    if (ave)
    {
        result = result.filter(el => {
            return el.vote_average >= ave
        })
    }

    if (minn || maxx)
    {
        let year_list = search_year(minn || 0, maxx || 9999)
        result = result.filter(el => year_list.includes(el.release_date))
    }
    move_name(result)
}

function search_year(mins, maxs) {
    let res = []
    let ans = []
    let res_year = []
    for (let i = 0; i < searchs.length; i++)
    {
        res.push(searchs[i].release_date)
        let split = res[i].split("-")
        ans.push(split)

    }
    for (let i = 0; i < searchs.length; i++)
    {
        if (ans[i][0] >= mins && ans[i][0] <= maxs) {
            res_year.push(res[i])
        }
    }
    return res_year
}

function next() {

    if (now_page < tot_page)
    {
        now_page++
        if (now_page_name == "top_movies") {
            top_movies()
        }
        else if (now_page_name == "popular_movies") {
            popular_movies()
        }
        else if (now_page_name == "upcoming_movies") {
            upcoming_movies()
        }
    }
}

function prev() {
    if (now_page > 1)
    {
        now_page--
        if (now_page_name == "top_movies") {
            top_movies()
        }
        else if (now_page_name == "popular_movies") {
            popular_movies()
        }
        else if (now_page_name == "upcoming_movies") {
            upcoming_movies()
        }
    }
}



!(function () {
    top_movies()

})();
