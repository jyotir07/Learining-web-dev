function login() {
  const email = document.getElementById('email').value;
  const password = document.getElementById('password').value;

  if (email === 'test@email.com' && password === 'test123') {
      alert('Login successful');
  } else {
      alert('Incorrect email or password');
  }
}