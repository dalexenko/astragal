<?
include("../includes/config.inc");
include("http://".$host."/includes/func.inc");
function authenticate() 
{
header('WWW-Authenticate: Basic realm="технологическая зона сайта"');
header('HTTP/1.0 401 Unauthorized');
echo "You must enter a valid login ID and password to access this resourcen";
exit;
}
if (!isset($_SERVER['PHP_AUTH_USER']))
{
authenticate();
} else {
$query = "select * from users where user='".$_SERVER['PHP_AUTH_USER']."' and pass='".$_SERVER['PHP_AUTH_PW']."'"; 
$result = mysql_query($query, $conn);
$nrows=mysql_num_rows($result);
if ($nrows==0)
{
//запись в лог 
authenticate();
}
else
{
//запись в лог
$row = mysql_fetch_array($result);
include ('header.inc');
echo "
<body bgcolor=$bodycolor text='#000000' link='#006699' vlink='#003366' alink='#CCCCCC' leftmargin='0' topmargin='0' marginwidth='0' marginheight='0'>
<table align='center' width='90%' border='1' cellspacing='0' cellpadding='5' height='70' bgcolor=$bodycolor>
<tr>
<td class='header' align='right' valign='top' colspan='2'>
";
if ($id) { } else {include("http://".$host."/includes/datetime.inc");}
echo "
</td>
</tr>
<tr> 
<td class='subheader' align='center' valign='top' colspan='2'><i><b><font face='Arial, Helvetica, sans-serif' color='#FFFFFF' size='3'>www.astragal.dp.ua - </font></b></i>
<i><b><font face='Arial, Helvetica, sans-serif' color='#FFFFFF' size='3'>технологическая зона сайта</font></b></i></td>
</tr>
";
echo "<tr><td colspan='2'><font face='Arial, Helvetica, sans-serif' color='#FFFFFF' size='2'>Пользователь:</font>".$row[2]."</td></tr>";
}
}
?>
<tr>
<td valign='top' width='25%'>
<?
include('menu.inc');
?>
</td>
<td valign='top'>
<?
if ($id)
	{
	$file_url = "/admin/".$id.".inc"; 
	insert($title[$id]);
	}
	else
    {
	include('main.inc');
    }
?>
</td>
</tr>
</table>
</body>
</html>