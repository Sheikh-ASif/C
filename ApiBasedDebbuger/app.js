document.getElementById("checkCodeBtn").addEventListener("click", checkCode);

function checkCode() {
    const code = document.getElementById("codeInput").value;
    const messagesList = document.getElementById("messagesList");
    messagesList.innerHTML = ''; // Clear previous messages

    let messages = [];

    // Check for missing semicolons
    if (code.includes("function") && !code.includes(";")) {
        messages.push("Tip: Consider adding semicolons after each statement for better readability.");
    }

    // Check for undeclared variables
    if (code.includes("let") && !code.includes("const") && !code.includes("var")) {
        messages.push("Tip: You may want to use 'const' for variables that are not reassigned.");
    }

    // Check for use of 'eval' (which is unsafe)
    if (code.includes("eval(")) {
        messages.push("Warning: Avoid using 'eval()' as it can lead to security risks.");
    }

    // Check for missing curly braces in loops or conditionals
    if (code.includes("if") && !code.includes("{")) {
        messages.push("Error: Missing curly braces for 'if' block. It's a good practice to use curly braces.");
    }

    // Basic function check (missing return statement or issues)
    if (code.includes("function") && !code.includes("return")) {
        messages.push("Tip: Consider adding a return statement to functions.");
    }

    // Add messages to the list
    if (messages.length === 0) {
        messages.push("No issues found! Your code looks good.");
    }

    messages.forEach((message) => {
        const li = document.createElement("li");
        li.textContent = message;
        messagesList.appendChild(li);
    });
}