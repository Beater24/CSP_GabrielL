function view(){
    if(document.getElementById("more").style.display === "block"){
        document.getElementById("more").style.display = "none"
        document.getElementById("outof").innerHTML = "Show More"
    }else{
    document.getElementById("more").style.display = "block"
    document.getElementById("outof").innerHTML = "Show Less"
}
}
let stadium = ["https://i0.wp.com/dt1jqiolganbd.cloudfront.net/wp-content/uploads/2024/09/deltacenterhockey.jpg?ssl=1", "https://i0.wp.com/dt1jqiolganbd.cloudfront.net/wp-content/uploads/2023/02/vivintarenacourt.jpg?ssl=1"]
let counter = 0

function change(){
    if (counter < stadium.length){
        document.getElementById("arena").src = stadium[counter]
        counter += 1
    }else{
        counter = 0
        document.getElementById("arena").src = stadium[counter]
    }
}