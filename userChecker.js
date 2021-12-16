
let mysql = require("mysql");
let con = mysql.createConnection({
    host : "localhost",
    user : "ellio",
})
function createDB() {

    con.connect(function (err) {
        if (err) throw err;
        console.log("Connected!");
        con.query("CREATE DATABASE readyRecipeUsers", function (err) {
            if (err) throw err;
            console.log("Database created");
            let sql = "CREATE TABLE users (email VARCHAR(255) PRIMARY KEY, password VARCHAR(255)))";
            con.query(sql, function (err) {
                if (err) throw err;
                console.log("Table created");
            })
        })
    })
}
createDB();

let usernameFound = false;
let passwordFound = false;
function checkEmail() {
    let user = document.getElementById("userName").value;
    let password = document.getElementById("password").value;
    con.connect(function (err) {
        if (err) throw err;
        con.query("SELECT email, password FROM users WHERE email, password = users", function (err, result){
            if(err) throw err;
            if(result){
                usernameFound = true
                passwordFound = true
            }
            if(!result){
                usernameFound = false
                passwordFound = false
            }
        })
    })
}
var age;
const date = document.getElementById("DOB").onchange;
function dateCheck(date) {
    var today = new Date();
    var birthDate = new Date(date);
    age = today.getFullYear() - birthDate.getFullYear();
    var m = today.getMonth() - birthDate.getMonth();
    if (m < 0 || (m === 0 && today.getDate() < birthDate.getDate())) {
        age--;
    }
    return age;
}
dateCheck();
if(18>age || age>100){
    console.log(age);
}


function check() {
    document.getElementById("RegisterButton").onclick = function () {
        checkEmail()
        if (!usernameFound && !passwordFound) {
            if (document.getElementById("rememberMe")) {
                localStorage.setItem("email", document.getElementById("userName").value)
                localStorage.setItem("password", document.getElementById("password").value)
                window.location.assign("form.html")
                return  true
            }
            return false
        }


    }
}
function goto(){
    window.location.assign("form.html")

}
const modal = document.getElementById('id01');


// When the user clicks anywhere outside of the modal, close it
window.onclick = function(event) {
    if (event.target === modal) {
        modal.style.display = "none";
    }
}


const myInput = document.getElementById("password1");
const letter = document.getElementById("letter");
const capital = document.getElementById("capital");
const number = document.getElementById("number");
const length = document.getElementById("length");

// When the user clicks on the password field, show the message box
myInput.onfocus = function() {
    document.getElementById("message").style.display = "block";
}

// When the user clicks outside of the password field, hide the message box
myInput.onblur = function() {
    document.getElementById("message").style.display = "none";
}

// When the user starts to type something inside the password field
myInput.onkeyup = function() {
    // Validate lowercase letters
    const lowerCaseLetters = /[a-z]/g;
    if(myInput.value.match(lowerCaseLetters)) {
        letter.classList.remove("invalid");
        letter.classList.add("valid");
    } else {
        letter.classList.remove("valid");
        letter.classList.add("invalid");
    }

    // Validate capital letters
    const upperCaseLetters = /[A-Z]/g;
    if(myInput.value.match(upperCaseLetters)) {
        capital.classList.remove("invalid");
        capital.classList.add("valid");
    } else {
        capital.classList.remove("valid");
        capital.classList.add("invalid");
    }

    // Validate numbers
    const numbers = /[0-9]/g;
    if(myInput.value.match(numbers)) {
        number.classList.remove("invalid");
        number.classList.add("valid");
    } else {
        number.classList.remove("valid");
        number.classList.add("invalid");
    }

    // Validate length
    if(myInput.value.length >= 8) {
        length.classList.remove("invalid");
        length.classList.add("valid");
    } else {
        length.classList.remove("valid");
        length.classList.add("invalid");
    }
}
let emailIsValid = false;
const forgotEmail = document.getElementById("forgotPasswordTextButton").onchange;
if(forgotEmail.match("/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/"))

const forgotPasswordButton = document.getElementById("forgotPasswordButton").onclick;
if(forgotEmail){
    emailIsValid = true;
    var mailOptions = {
        from: 'ready@noresponse.com',
        to: forgotEmail,
        subject: 'Reset password.',
        html: '<h1>Please enter this as your temporary password:</h1><p>ej8q388</p>'
    }
}