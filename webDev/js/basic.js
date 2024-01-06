// console.log("hello");

// function avg(a, b){
//     return ((a+b)/2);
// }

// console.log(avg(3,5));
// console.log(avg(4,6));

// let mydate = new Date();
// console.log(mydate);
// console.log(mydate.getTime());
// console.log(mydate.getDate());
// console.log(mydate.getFullYear());
// // console.log(mydate.getHours());
// // console.log(mydate.getMinutes());
// // console.log(mydate.getSeconds());

// a=mydate.getHours();
// b=mydate.getMinutes();
// c=mydate.getSeconds();
// console.log(a,':',':',b,':',c);

// let s=document.getElementById('sbutton');
// let a=document.getElementById('h');
// let a =document.createElement("div");
// a.innerHTML="hello lhi";


// function change(){
//     document.body.style.backgroundColor ="blue";
//     // a.innerHTML="HELLO HI";
//     document.body.appendChild(a);

// }

// setTimeout(change,3000);

// logkaro=()=>{
//     console.log("heeeeee");
// }

// setTimeout(logkaro,3000);

// s.addEventListener("click",() => {
//     setTimeout(() => {
//         change()
//     }, 3000)
// })

// s.addEventListener("click",()=>{
//     setTimeout(() => {
//         change()
//     },2000);
// })

// s=document.body;

const randColor = () =>  {
    return "#" + Math.floor(Math.random()*16777215).toString(16).padStart(6, '0').toUpperCase();
}

colorcahnge1=()=>{
    document.body.style.backgroundColor=randColor();
}


clr=setInterval(() => {
    colorcahnge1()
}, 3000);

let c=document.getElementById("main");

colorchange=()=>{
    c.style.backgroundColor=randColor();
}

setInterval(() => {
    colorchange();
},2000);


