<?
include('../includes/config.inc');
include('../includes/func.inc');

$kursistdate=date(Y).date(m).date(d)."<BR>";
$born = $brnyear.$brnmnth.$brnday;
$fio = $fiof." ".$fioi." ".$fioo;

$flds="kursistdate, born, obraz, vuzoffice, obrazform, vuzkvalific, cource, forlang, workopl, fio, officedost"; 

$ins="'".$kursistdate."','".$born."','".$obraz."','".$vuzoffice."','".$obrazform."','".$vuzkvalific."','".$cource." ','".$forlang."','".$workopl."','".$fio."','".$officedost."'";
$query="INSERT INTO kursisti (".$flds.") VALUES (".$ins.")"; 
$mysql_qv = mysql_query ($query, $conn);  
massage($mysql_qv);
$query_f="SELECT max(num) from kursisti";
$mysql_f = mysql_query ($query_f, $conn);  
$row_f = mysql_fetch_array($mysql_f);
$num_next=$row_f[0];
$foto_name = "photo".$num_next.".jpg";
$destination_file=$foto_name;

$ftp_server = "ftp.astragal.dp.ua";
$ftp_user = "astragal";
$ftp_pass = "i5prmEc";

// set up a connection or die
$conn_id = ftp_connect($ftp_server) or die("Couldn't connect to $ftp_server"); 

// try to login
if (@ftp_login($conn_id, $ftp_user, $ftp_pass)) {
    
} else {
    echo "Couldn't connect";
}

$u=ftp_chdir($conn_id, 'www.astragal.dp.ua/training/photos');
$upload = ftp_put($conn_id, $destination_file, $userfile, FTP_BINARY);
image_output($destination_file, 'file');
echo "<center>";
if ($upload==1)
{
echo "Фото успешно сохранено на сервере";
}
else
{
echo "ОШИБКА сохранения фото на сервере";
}
echo "<br><input type='button' value='закрыть окно' onclick='window.close()'></center>";
?>