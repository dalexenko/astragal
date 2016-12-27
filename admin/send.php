<?
include('../includes/config.inc');
include('../includes/func.inc');

/* subject */
$subject = $_POST["sub"];
$message = $_POST["text"];
/* message */
//$message = "<html><head><title>рассылка</title></head><body><h3 align=center>".$sub=."</h3>".."</body></html>";
/* To send HTML mail, you can set the Content-type header. */
$headers  = "MIME-Version: 1.0\r\n";
$headers .= "Content-type: text/plain; charset=windows-1251\r\n";

/* additional headers */
$headers .= "From: astragal@ua.fm\r\n";

$query="SELECT * FROM emails";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if (!$num_rows)
{
echo "<center>В вашей рассылке нет подписчиков.</center>"; 
}
else
{
echo "<table class=regular border=0 align=center>";
echo "<td valign='top'><b>список подписавшихся на вашу рассылку:</b><br></td><td>";
while ($row = mysql_fetch_array($mysql_qv))
{
echo $row[0]."<br>";

/* recipients */
$to  = $row[0];
/* and now mail it */
mail($to, $subject, $message, $headers) or die("не смог разослать письмо!");
}
echo "</table>";
}
echo "<center><button  onclick='window.close()'>закрыть окно</button></center></td><td>";
?>