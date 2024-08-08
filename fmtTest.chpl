use IO.FormattedIO;


const D = {0..<5,0..<5};
const A: [D] int;



use IO, JSON;

var jsout = stdout.withSerializer(jsonSerializer);
jsout.writeln(A);

const fmt = "%ij".format(A);
writeln(fmt);

