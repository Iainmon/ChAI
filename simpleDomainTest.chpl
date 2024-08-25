use SimpleDomain;

const d: rect(2) = {0..<5,0..<5};

writeln(d);

for i in d.eachOrder() do
    writeln(i);