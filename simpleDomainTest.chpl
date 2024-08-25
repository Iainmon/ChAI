use SimpleDomain;

{
    const d: rect(2) = {0..<5,0..<5};

    writeln(d);

    for i in d.eachOrder() do
        writeln(i);
}

const d: rect(3) = {0..<3,0..<4,0..<5};


for i in d.eachOrder() do
    writeln(i);

writeln(d);

writeln(d.toString());

const e: rect(4) = ((1,2,3,4),(1,1,1,1));
writeln(e.toString());