function right(e) {
if (navigator.appName == 'Netscape' && 
(e.which == 3 || e.which == 2))
return false;
else if (navigator.appName == 'Microsoft Internet Explorer' && 
(event.button == 2 || event.button == 3)) {
alert("don't do it!!!");
return false;
}
return true;
}
document.onmousedown=right;
if (document.layers) window.captureEvents(Event.MOUSEDOWN);
window.onmousedown=right;

function begin_cour() {
open('http://astragal.dp.ua/training/reccour.php','1','toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1 width=550 height=300');
}
function begin_testing() {
open('rectest.php','1','toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1 width=550 height=300');
}
function begin_training() {
open('rectrain.php','1','toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1 width=550 height=300');
}

function about_sergun() {
open('about.php','1','toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1 width=550 height=300');
}

// проверка анкеты соискателя
function check_anketa(form)
{
if (form.fiof.value == "" || form.fioi.value == "" || form.fioo.value == "")               
{
alert('не все данные введены!');
}
else
{
form.submit();
}
}

// проверка заявки работодателя

function check_sworker(form)
{
if (form.fioquery.value == "" || form.officephone.value == "" || form.specialist.value == "" || form.minvoz.value == "" || form.maxvoz.value == "" || form.obrazow.value == "" || form.payispsroc.value == "" || form.payshtat.value == "" )               
{
alert('не все данные введены!');
}
else
{
form.submit();
}
}

// проверка формы фирмы

function check_firm(form)
{
if (form.firmname.value == "" || form.partner.value == "" || form.firmadres.value == "" || form.firmtel.value == "" || form.firmfiocont.value == "" || form.pwd1.value != form.pwd2.value)               
{
alert('не все данные введены!');
}
else
{
form.submit();
}
}

