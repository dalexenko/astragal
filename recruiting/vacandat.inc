<?
echo "<br>";
echo "<b>Должность: </b><font color='blue'size=2><b>".$row->specialist."</b></font><br>";
echo "<b>Требования к должности: </b><br>";
echo str_repeat("&nbsp;", 10);
echo "<b>Образование: </b>".$row->obrazow."<br>";
echo "<b>Заработная плата: </b><br>";
echo str_repeat("&nbsp;", 10);
echo "<b>На испытательный срок: </b>".$row->payispsroc." грн.<br>";
echo str_repeat("&nbsp;", 10);
echo "<b>В штате: </b>".$row->payshtat." грн.<br>";
echo "<b>Дополнительная информация: </b>".$row->other."<br>";
?>