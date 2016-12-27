<td valign="top" class="header" colspan=2>
</td>
</tr>
<tr>
<td valign="top" colspan="2" class="menuline">
<center>
<p><font face="Tahoma" size="2"><b>Адрес для личного обращения:</b></font></p>
<p><font face="Tahoma" size="2"><?=$address?></font></p>
<p><font size="2" face="Tahoma"><?=$telfax?></font><br>
<p><font face="Tahoma" size="2"><b>Руководитель компании 
</b>
<br>
<?
$winstat='width=750 height=500 toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1';
$kav="'";
$i=1;
$about='../about.php';
echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">Сергун Оксана Юрьевна</a>';
?><br>
<?=$tel?><br>
Email: <a href="mailto:<?=$email2?>"><?=$email2?></a></font></p> 
</center>
</td>
<td valign=bottom align=right>
<input type='button' class='form' value='Записаться' onclick="begin_testing()">
</td>