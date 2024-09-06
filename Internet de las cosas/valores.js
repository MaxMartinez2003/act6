var particle = new Particle();
var token;

particle.login({username: 'rjimenez@ucol.mx', password: 'K7RM839C2'}).then(
  function(data) {
     token = data.body.access_token;
  },
  function (err) {
    console.log('Could not log in.', err);
  }
);
setInterval(function() {

  Ktms.oninput = function() {
  var output = document.getElementById('Kvaluetms');
  output.innerHTML = this.value;
  var Salida=this.value;//
  particle.callFunction({ deviceId: '240046000e47313037363132', name: 'TMS_2', argument: Salida, auth: token, });
 }
 Ktms.oninput();
},5000)