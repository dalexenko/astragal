<?
//error reporting conf  

error_reporting(E_ERROR); 

//хост
//$host='www.astragal.dp.ua';
$host='astragal:8080';

// основные настройки интерфейса

$bodycolor="3399ff";

//информация о фирме
$address="г. Днепропетровск, ул.Серова , 9 , оф. 22";
$telfax= "тел/факс: +38 0562 744 73 12";
$tel1= "тел: +38 056 744 73 12";
$tel2= "тел: +38 0562 32 50 40";
$email1="astragal@teleport.com";
$email2="astragal@ua.fm";
$website1="www.astragal.dp.ua";
$website2="www.astragal.ukrbiz.net";
$website3="";

//информация о разделах

$title = array
(
"main"=>"ПРЕДЛАГАЕМ ВАШЕМУ ВНИМАНИЮ",
"news"=>"НОВОСТИ САЙТА",
"about"=>"О КОМПАНИИ",
"contacts"=>"КОНТАКТНАЯ ИНФОРМАЦИЯ",
"submit"=>"ПОДПИСКА НА РАССЫЛКУ",
"novpod"=>"ПОДПИСКА НА РАССЫЛКУ",
"vacance"=>"БАЗА ВАКАНСИЙ",
"vacanhot"=>"'ГОРЯЧИЕ' ВАКАНСИИ",
"resume"=>"БАЗА РЕЗЮМЕ",
"resumhot"=>"'ГОРЯЧИЕ' РЕЗЮМЕ",
"anketa"=>"АНКЕТА ДЛЯ СОИСКАТЕЛЯ",
"sworker"=>"ЗАЯВКА ДЛЯ РАБОТОДАТЕЛЯ",
"seminars"=>"СЕМИНАРЫ",
"training"=>"ТРЕНИНГИ",
"tests"=>"ТЕСТИРОВАНИЕ",
"kursisti"=>"КУРСИСТЫ",
"firms"=>"БАЗА ДАННЫХ ПРЕДПРИЯТИЙ",
"cform"=>"ВВОД ДАННЫХ О ФИРМЕ",
"editfirm"=>"РЕДАКТИРОВАНИЕ ДАННЫХ О ФИРМЕ",
"srchfirm"=>"ПОИСК ФИРМЫ-ПАРТНЕРА",
"adsworker"=>"ЗАЯВКА ДЛЯ РАБОТОДАТЕЛЯ (admin)",
"adanketa"=>"АНКЕТА ДЛЯ СОИСКАТЕЛЯ (admin)",
"adnews"=>"ДОБАВЛЕНИЕ НОВОСТИ",
"adkurst"=>"ДОБАВЛЕНИЕ КУРСИСТА",
"vacances"=>"РАБОТА С ВАКАНСИЯМИ",
"resumes"=>"РАБОТА С РЕЗЮМЕ",
);

//mysql
$mysqlhost='localhost';
$mysqlbase ='astragal';
$mysqluser ='root';
$mysqlpass ='';

$conn = mysql_connect ($mysqlhost, $mysqluser, $mysqlpass)
or die ("Could not connect");
$tbl = mysql_select_db ($mysqlbase, $conn) or die ("Could not select db");
?>