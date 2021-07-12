program produtorio;
var 
N, j, x, i, y: integer;
power: integer;
begin
  writeln ('Escreva o valor de N:');
  read(N);
  writeln ('Escreva o valor de j:');
  read(j);
  writeln ('Escreva o valor de até onde o produtorio deve variar:');
  read(x);
  for i:= 1 to x do
    begin
        for y:= 2 to j do
            begin
                power = i*i;
            end
        prod = N*power;
    end;
                
end.