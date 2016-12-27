<?php
	ob_start(); 

$mydir = "../training";	
				

$curdir=dir($mydir);

if($writefile) 
{
	$fd=fopen($mydir."/".$file, "w");
	fwrite($fd, stripslashes($text));
	fclose($fd);
	header("Location: $PHP_SELF");
} 
elseif($file) 
{
	$fp=fopen($mydir."/".$file, "r"); // $mydir$myfile
	while(!feof($fp)) {
		$con .= fgets($fp, 4096);
		}
	fclose($fp);
	
	echo "<FORM ACTION='$PHP_SELF' METHOD='post'>
		<input type=hidden name=writefile value=$file>
		<input type=hidden name=file value=$file>
		<TITLE>WebShell - Editing $file</TITLE>
		<TEXTAREA ROWS='30' COLS='90' NAME='text'>";
	echo $con;
	echo "	</TEXTAREA><BR>
		<input type='submit' value='Save'></form>";
} 
else 
{
echo "<center>файл успешно сохранен<br><input type='button' value='закрыть окно' onclick='window.close()'></center>";		
} 

ob_end_flush(); 
?>