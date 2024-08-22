



use List;
use Map;

record dict : serializable {
    type keyType;
    type valType;

    var table: map(keyType,valType);
    var order: list(keyType);

    forwarding table only this;

    proc init(in table: map(?keyType,?valType),in order: list(keyType)) {
        this.keyType = keyType;
        this.valType = valType;
        this.table = table;
        this.order = order;
    }

    proc init(in table: map(?keyType,?valType)) {
        var ks = new list(keyType);
        for k in table.keys() do 
            ks.pushBack(k);
        this.init(table,ks);
    }

    proc init(type keyType, type valType) {
        this.keyType = keyType;
        this.valType = valType;
        this.table = new map(keyType,valType);
        this.order = new list(keyType);
    }

    proc size: int {
        const s = table.size;
        assert(s == order.size, "Table and order sizes out of sync: ", s, order.size);
        return s;
    }


    iter keys(): keyType do 
        for i in 0..<order.size do 
            yield order[i];

    iter values(): valType do 
        for k in keys() do 
            yield table[k];

    iter ref these() do
        for k in order {
            ref val = table[k];
            yield (k,val);
        }

    proc ref insert(key: keyType, in value: valType) {
        if !order.contains(key) then
            order.pushBack(key);
        table.addOrReplace(key,value);
    }

}