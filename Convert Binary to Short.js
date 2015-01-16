$(document).ready(function() {
  var num = prompt("What number would you like to convert from binary to unsigned short?");
  var final = 0;
  for(i=0; i<16; i++) {
    final += Number(num[i]) * Math.pow(2, 15-i);
  }
  alert(final);
});
