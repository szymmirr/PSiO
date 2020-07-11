program armiapolcyn;
var n,liczba,i:integer;
function suma(n:integer):integer;
begin
for i:=0 to n do
begin
read (liczba);
suma:=suma+liczba;
end;
end;
begin
read (n);
writeln(suma (n));
end.