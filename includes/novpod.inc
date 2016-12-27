<td valign="top" align=center colspan="2" class="menuline">
<?
$mail=$_POST["mail"];
$subject = "подписка";
$message = "Спасибо за подписку в нашей системе";

$headers  = "MIME-Version: 1.0\r\n";
$headers .= "Content-type: text/plain; charset=windows-1251\r\n";
$headers .= "From: astragal@ua.fm\r\n";

if (validEmail($mail)) 
{
$query_s="SELECT * FROM emails where address='".$mail."'";
$mysql_qvs = mysql_query ($query_s, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qvs);

if ($num_rows==0)
{                                            
$query="INSERT INTO emails (address) VALUES ('".$mail."')";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
echo "<b>Спасибо за подписку!</b>";
@mail($mail, $subject, $message, $headers) or die("не смог разослать письмо!");
}
else
{
echo "<b>Вы уже подписались на рассылку!</b>";
}
}
else
{
echo "<font color=red>Ошибка! Введите правильный E-mail!";
}
?>
</td>