{ %norun }
{ %needlibrary }
{ %target=linux,haiku }
{$mode objfpc}
library tw3964a;

  function testfunc : longint;external name 'testfunc';

  function f : longint;public;
    begin
      result:=testfunc;
    end;

  exports
    f;

begin
end.
