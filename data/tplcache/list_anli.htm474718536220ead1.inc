<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",341,370);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",410,468);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",860,895);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n    <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n    ",1034,1251);
$z[5][4]['type']="son";
$z[5][4]['currentstyle']="<li id='left_current'><a href='~typelink~' class='thisclass'>~typename~</a></li>";
$z[6]=Array("list","\r\n      <li> <a href=\"[field:arcurl/]\" class=\"case_a\" title=\"[field:title/]\" target=\"_blank\"> <img src=\"[field:picname/]\">\r\n        <p></p>\r\n        <div class=\"case_div\"> Project name<br/>\r\n          <span>[field:title/]</span><br/>\r\n          Post time：[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]<br/>\r\n          <img src=\"/skin/images/a_png.png\"> </div>\r\n        </a> </li>\r\n      ",1499,1925);
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",2029,2082);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[8]=Array("include","",2244,2281);
$z[8][4]['filename']="footer.htm";

?>