// Function to calculate DA based on salary and gender
function calculateDA(salary, gender) {
    switch (gender) {
        case "male":
            if (salary < 500000) {
                return 0.1 * salary;
            } else if (salary < 1000000) {
                return 0.2 * salary;
            } else if (salary < 3000000) {
                return 0.3 * salary;
            } else {
                return 0;
            }
        case "female":
            if (salary < 500000) {
                return 0.15 * salary;
            } else if (salary < 1000000) {
                return 0.25 * salary;
            } else if (salary < 3000000) {
                return 0.35 * salary;
            } else {
                return 0;
            }
        default:
            return 0;
    }
}



// Prompt the user for input
const salary = parseFloat(prompt("Enter your salary: "));
const gender = prompt("Enter your gender (male/female): ").toLowerCase();

// Calculate DA and display the result
const da = calculateDA(salary, gender);
console.log(`Your Dearness Allowance (DA) is: ${da}`);
