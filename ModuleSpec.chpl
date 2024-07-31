use Tensor;

use Network;

use JSON;

use Map;

import IO;


proc moduleFromSpec_(reader: IO.fileReader(?), ref deserializer: jsonDeserializer) {
    var des = deserializer.startClass(reader,"cnn");
    var layerType = des.readField("layer",string);
    writeln(layerType);
    var attributes = des.readField("attributes",map(string,string));
    writeln(attributes);
    writeln(reader.readString(30));

    select layerType {
        when "fail" {

        }
        otherwise {
            // writeln(reader.readString(30));

            var mdes = deserializer.startMap(reader);
            mdes.readKey(string);
            // writeln(reader.readString(2));
            moduleFromSpec_(reader,reader.deserializer);
        }
    }
}


proc modelFromSpec(reader: IO.fileReader(?)) {
    var ms = reader.read(owned ModuleSpecification);
    writeln(ms);
    return moduleFromSpec(ms);
    return 1;
}
var fl = IO.open("scripts/models/cnn/specification.json", IO.ioMode.r);
var reader = fl.reader(deserializer=new jsonDeserializer());
var m = modelFromSpec(reader);

writeln(m.moduleNames());

for (n,md) in m.namedModules() {
    writeln((n,md.moduleName));
}

writeln(m.signature);
writeln(m.subModules.order);
// writeln(m);
// writeln(m);
// var ms = reader.deserializer.deserializeType(reader,shared ModuleSpecification);
// var ms = new shared ModuleSpecification();
// var ms = new ModuleSpecification();
// var ms = reader.read(owned ModuleSpecification);
// writeln(ms);