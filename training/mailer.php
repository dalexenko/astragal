<?
include('../includes/config.inc');
include('../includes/smalhead.inc');
echo "
<table width=100%>
<tr>
<td class=header>
Запись на $tema
</td>
</tr>
<tr>
<td class=subheader>
";
echo $fio."!<br>";

$mail="siuta@mail.ru";
$subject = $tema;
$message = "ФИО: ".$fio."\n".$tema.": ".$cource."\nДата: ".$data."\nКонтактный телефон: ".$continfo;

$headers  = "MIME-Version: 1.0\r\n";
$headers .= "Content-type: text/plain; charset=windows-1251\r\n";
$headers .= "From: astragal@ua.fm\r\n";

$s = mail($mail, $subject, $message, $headers) or die("не смог разослать письмо!");

if ($s==1)
{
echo "Сообщение отправлено без ошибок!";
} else 
{
echo "Сообщение не было отправлено в связи с возникшей ошибкой! Попробуйте написать администратору по адресу <a href=mailto:damen@mail.treasury>damen@mail.treasury</a>"; 
}; 
?>
</td>
</tr>
</table>
</body>
</html>