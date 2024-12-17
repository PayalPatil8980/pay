let users = {}; // Object to store user data
let currentUser = null; // Tracks the currently logged-in user

function updateForm() {
    const task = document.getElementById("task-select").value;
    document.getElementById("username-field").classList.remove("hidden");
    document.getElementById("password-field").classList.add("hidden");
    document.getElementById("confirm-password-field").classList.add("hidden");
    document.getElementById("new-password-field").classList.add("hidden");

    if (task === "signup") {
        document.getElementById("password-field").classList.remove("hidden");
        document.getElementById("confirm-password-field").classList.remove("hidden");
    } else if (task === "login") {
        document.getElementById("password-field").classList.remove("hidden");
    } else if (task === "changepass") {
        document.getElementById("password-field").classList.add("hidden");
        document.getElementById("new-password-field").classList.remove("hidden");
    }
}

function handleTask(event) {
    event.preventDefault(); // Prevent form submission
    const task = document.getElementById("task-select").value;
    const username = document.getElementById("username").value;
    const password = document.getElementById("password").value;
    const confirmPassword = document.getElementById("confirm-password").value;
    const newPassword = document.getElementById("new-password").value;
    const output = document.getElementById("output-message");

    if (task === "signup") {
        if (!/[a-zA-Z]/.test(username) || !/\d/.test(username) || !/@/.test(username)) {
            output.textContent = "Username must contain a letter, a number, and '@'.";
            return;
        }
        if (password !== confirmPassword) {
            output.textContent = "Passwords do not match!";
            return;
        }
        users[username] = password;
        output.textContent = "Account created successfully!";
    } else if (task === "login") {
        if (users[username] && users[username] === password) {
            currentUser = username;
            output.textContent = `Welcome, ${username}! You are logged in.`;
        } else {
            output.textContent = "Incorrect username or password!";
        }
    } else if (task === "forgot") {
        if (users[username]) {
            output.textContent = `Your password is: ${users[username]}`;
        } else {
            output.textContent = "Username not found!";
        }
    } else if (task === "changepass") {
        if (currentUser === username) {
            users[username] = newPassword;
            output.textContent = "Password changed successfully!";
        } else {
            output.textContent = "You must log in to change your password!";
        }
    }
}
