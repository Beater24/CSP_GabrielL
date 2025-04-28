function view(){
    if(document.getElementById("thehidden").style.display === "block"){
        document.getElementById("thehidden").style.display = "none"
        document.getElementById("problem").innerHTML = "Show More"
    }else{
    document.getElementById("thehidden").style.display = "block"
    document.getElementById("problem").innerHTML = "Show Less"
}
}
let Lebonbon = ["https://www.the-sun.com/wp-content/uploads/sites/6/2023/10/AS_LEBRON-MEMES_OP.jpg?strip=all&quality=100&w=1620&h=1080&crop=1", "https://cdn.vox-cdn.com/thumbor/czh2W6O7f09IjBieDZJo03OW-mk=/0x40:960x680/1400x1400/filters:focal(0x40:960x680):format(jpeg)/cdn.vox-cdn.com/uploads/chorus_image/image/10416343/lebronnn.0.jpg", "https://i.insider.com/5b97efb12badb93c817e222d?width=700", "https://i.pinimg.com/736x/6d/26/a2/6d26a28e9269843a0103da816b83457f.jpg"]
let counter = 0

function change(){
    if (counter < Lebonbon.length){
        document.getElementById("scream").src = Lebonbon[counter]
        counter += 1
    }else{
        counter = 0
        document.getElementById("scream").src = Lebonbon[counter]
    }
}