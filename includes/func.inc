<?
/////////////////////////////////////////////////////////////////////////////////////////////////////////
function select_regnum()
{
$mysqlhost='localhost';
$mysqlbase ='astrabase';
$mysqluser ='astragal';
$mysqlpass ='swkl577';

$conn = mysql_connect ($mysqlhost, $mysqluser, $mysqlpass)
or die ("Could not connect");
$db = mysql_select_db ($mysqlbase, $conn) or die ("Could not select db");
$query="select max(num) from firms";
$mysql_qv = mysql_query ($query, $conn)or die("Invalid query");
$row = mysql_fetch_array($mysql_qv);
$regnum = $row[0];
return $regnum;
}

function massage($mysql_qv)
{
global $host;
include("http://".$host."/includes/smalhead.inc");
if ($mysql_qv==1)
{
echo "
<table align=center width=50% border=1>
<tr>
<td class=header>
Запись...
</td>
</tr>
<tr>
<td class=subheader>
Ваши данные успешно внесены в базу!
</td>
</tr>
</table>
"; 
}
else
{
echo "
<table width=100%>
<tr>
<td class=header>
Запись...
</td>
</tr>
<tr>
<td class=subheader>
<font color='red'>Ошибка записи. Закройте, пожалуйста, это окно и повторите ввод данных!</font>
</td>
</tr>
</table>
"; 
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////
function insert($title)
{
global $host;
global $nazv;
global $mail;
global $conn;
global $tel;
global $telfax;
global $address;
global $website1;
global $website2;
global $email1;
global $email2;
global $file_url;
global $seminar;
global $trning;
echo "
<table cellpadding='2' cellspacing='0' border='0' class='regular' width=99%>
<tr>
<td valign='top' class='header' width='60%'>$title</td>
<td valign='top' class='menulineon'  width='40%'>
";
include("http://".$host."/includes/datetime.inc");
echo"</td></tr><tr>";
$link="http://".$host.$file_url;
include($link);
echo "</tr></table>";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
function emptybase ()
{
echo "<table border=1 width='95%' bordercolor='navy' align=center><tr><td class=grey align=center>";
echo "<font color=red>ДАННЫЕ В БАЗЕ ОТСУТСТВУЮТ!</font><br>";
echo "</td></tr></table><br>";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

function admin_change_massage($mysql_qv)
{
global $host;
include("http://".$host."/includes/smalhead.inc");
if ($mysql_qv==1)
{
echo "
<table align=center width=50% border=1>
<tr>
<td class=header>
Изменение статуса...
</td>
</tr>
<tr>
<td class=subheader>
статус записи успешно изменен!
</td>
</tr>
</table>
"; 
}
else
{
echo "
<table width=100%>
<tr>
<td class=header>
Запись...
</td>
</tr>
<tr>
<td class=subheader>
<font color='red'>Ошибка записи. Закройте, пожалуйста, это окно и перепроверьте вводимые данные!</font>
</td>
</tr>
</table>
"; 
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

function admin_delete_massage($mysql_qv)
{
global $host;
include("http://".$host."/includes/smalhead.inc");
if ($mysql_qv==1)
{
echo "
<table align=center width=100% border=1>
<tr>
<td class=header>
Удаление...
</td>
</tr>
<tr>
<td class=subheader>
запись успешно удалена!
</td>
</tr>
</table>
"; 
}
else
{
echo "
<table width=100%>
<tr>
<td class=header>
Запись...
</td>
</tr>
<tr>
<td class=subheader>
<font color='red'>Ошибка записи. Закройте, пожалуйста, это окно и перепроверьте вводимые данные!</font>
</td>
</tr>
</table>
"; 
}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

function validEmail($email) {
if (eregi("^[a-z0-9]+([-_.]?[a-z0-9])+@[a-z0-9]+([-_.]?[a-z0-9])+.[a-z]{2,4}", $email)) {
   return TRUE;
} else {
       return FALSE;
  }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
function image_output($file_name, $out)
{
chdir ('../training/photos/');
if ($out<>'file')
	{
	$thumb = imagecreatefromjpeg ($file_name);
	$output = imagejpeg ($thumb, '', '100');
	}
	else
	{
	$thumb_file=$file_name;
	$size=getimagesize ($file_name);
$width=102;
$height=round($size[1]*$width/$size[0]);
$thumb = imagecreatetruecolor($width, $height);
$image = imagecreatefromjpeg ($file_name);
imagecopyresampled($thumb, $image, 0, 0, 0, 0, $width, $height, ImageSX($image), ImageSY($image));
$output = imagejpeg ($thumb, $thumb_file,  '100');
}
return $output;
}
?>