// const person={
//     firstName:"ram",
//     lastName:"prasad",
//     id:555,
//     fullname:function(){
//         return this.firstName+" "+this.lastName;
//     }
// }


// console.log(person.fullname());

// localStorage.setItem("name","sourav");


let a=document.getElementById("clock");
let b;
let time;
let date;
const options={weekday:'long',year:'numeric',month:'long',day:'numeric'};


setInterval(() => {
    b= new Date();
 time= b.getHours()+":"+b.getMinutes()+":"+b.getSeconds();
 date=b.toLocaleDateString(undefined,options);

a.innerHTML="Current time is------->"+ time+" "+"<br>on"+" "+date;
}, 1000);
 