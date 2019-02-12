#ifndef _nvespec_h
#define _nvespec_h

class ObisMeta {
    private:
        byte unknown1;
        byte unknown2;
};

class Obis {
    private:
        byte* code;
        byte* value;
        ObisMeta metaData;
    
    public:
        byte* getCode() { return code; }
        byte* getValue() { return value; }
        ObisMeta getMetaData() { return metaData; }
};

class NveSpec :: NveSpec() {
    private:
        time_t timestamp;
        Obis* data;

    public:
        time_t getTimestamp() { return timestamp; }
        Obis* getData() { return data; }
};

#endif
