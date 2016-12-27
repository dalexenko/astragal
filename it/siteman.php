<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<HTML>
<HEAD>
<TITLE> New Document </TITLE>
<META NAME="Generator" CONTENT="EditPlus">
<META NAME="Author" CONTENT="">
<META NAME="Keywords" CONTENT="">
<META NAME="Description" CONTENT="">
</HEAD>
<BODY>
<?
$datefile = "redirect.inc";
$fp = fopen($datefile, "r");
while ( ! feof ($fp) ) 
{
$zel = fgets ($fp,1024);
}
if ($zel==0)
{
echo "
<FORM METHOD=POST ACTION='siteman.php'>
<INPUT TYPE='hidden' mame='site' value='stop'>
<INPUT TYPE='submit' value='stop website'>
</FORM>
";
}
else 
{
echo "
<FORM METHOD=POST ACTION='siteman.php'>
<INPUT TYPE='hidden' mame='site' value='start'>
<INPUT TYPE='submit' value='start website'>
</FORM>
";

}

if($zel==0 && ($site))
{
$akt=$zel+1;
}
else
{
$akt=0;
}
fclose($fp);
$fp2 = fopen($datefile, "w");
fwrite($fp2,$akt);
fclose($fp2);
?>