let Lebonbon = ["https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTQavuM9dceyOuZ8jrns3j6VWSmV0UBWnrLeQ&s", "https://i1.sndcdn.com/artworks-000116719590-pmrtyu-t500x500.jpg", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQAEKukFMcGKGg0EkIV8aUszjgd4lG6Ro-REg&s", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRfsJv5UvSASAn7zeEF1a4CLS8-GtSvwjRC-Q&s", "https://i.ytimg.com/vi/uDwhrlTKF-I/maxresdefault.jpg"]
let counter = 0

function change(){
    if (counter < Lebonbon.length){
        document.getElementById("images").src = Lebonbon[counter]
        counter += 1
    }else{
        counter = 0
        document.getElementById("images").src = Lebonbon[counter]
}
}

function hello(){
    let name = window.prompt("What is your name?", "LeBron")
    document.getElementById("title").innerHTML = "Hello " + name + "!"
}
function hover(){
    document.getElementById("images").src = "https://i.ytimg.com/vi/uDwhrlTKF-I/maxresdefault.jpg"
}
function leave(){
    document.getElementById("images").src = "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRfsJv5UvSASAn7zeEF1a4CLS8-GtSvwjRC-Q&s"
}

function pop(){
    window.alert("If you click on that again you are gay.")
}
function show(){
    document.getElementById("curry").style.display = "block"
}
function view(){
    if(document.getElementById("more").style.display === "block"){
        document.getElementById("more").style.display = "none"
        document.getElementById("shw").innerHTML = "Show More"
    }else{
    document.getElementById("more").style.display = "block"
    document.getElementById("shw").innerHTML = "Show Less"
}
}