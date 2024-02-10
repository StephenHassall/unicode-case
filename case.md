# Unicode Lower & Upper Case Characters

Below is a list of all the characters in lower case and their matching upper case versions.

1. [Basic Latin](#basic-latin)
2. [Latin 1 Supplement](#latin-1-supplement)
3. [Latin Extended A](#latin-extended-a)
4. [Latin Extended B Non-European and Historic Latin](#latin-extended-b-non-european-and-historic-latin)
5. [Latin Extended B Croatian](#latin-extended-b-croatian)
6. [Latin Extended B Pinyin](#latin-extended-b-pinyin)
7. [Latin Extended B Phonetic and Historic Letters](#latin-extended-b-phonetic-and-historic-letters)
8. [Latin Extended B Slovenian and Croatian](#latin-extended-b-slovenian-and-croatian)
9. [Latin Extended B Romanian](#latin-extended-b-romanian)

## Basic Latin

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x0061`|&#x0061;|`0x0041`|&#x0041;|
|`0x0062`|&#x0062;|`0x0042`|&#x0042;|
|`0x0063`|&#x0063;|`0x0043`|&#x0043;|
|`0x0064`|&#x0064;|`0x0044`|&#x0044;|
|`0x0065`|&#x0065;|`0x0045`|&#x0045;|
|`0x0066`|&#x0066;|`0x0046`|&#x0046;|
|`0x0067`|&#x0067;|`0x0047`|&#x0047;|
|`0x0068`|&#x0068;|`0x0048`|&#x0048;|
|`0x0069`|&#x0069;|`0x0049`|&#x0049;|
|`0x006A`|&#x006A;|`0x004A`|&#x004A;|
|`0x006B`|&#x006B;|`0x004B`|&#x004B;|
|`0x006C`|&#x006C;|`0x004C`|&#x004C;|
|`0x006D`|&#x006D;|`0x004D`|&#x004D;|
|`0x006E`|&#x006E;|`0x004E`|&#x004E;|
|`0x006F`|&#x006F;|`0x004F`|&#x004F;|
|`0x0070`|&#x0070;|`0x0050`|&#x0050;|
|`0x0071`|&#x0071;|`0x0051`|&#x0051;|
|`0x0072`|&#x0072;|`0x0052`|&#x0052;|
|`0x0073`|&#x0073;|`0x0053`|&#x0053;|
|`0x0074`|&#x0074;|`0x0054`|&#x0054;|
|`0x0075`|&#x0075;|`0x0055`|&#x0055;|
|`0x0076`|&#x0076;|`0x0056`|&#x0056;|
|`0x0077`|&#x0077;|`0x0057`|&#x0057;|
|`0x0078`|&#x0078;|`0x0058`|&#x0058;|
|`0x0079`|&#x0079;|`0x0059`|&#x0059;|
|`0x007A`|&#x007A;|`0x005A`|&#x005A;|

## Latin 1 Supplement

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x00E0`|&#x00E0;|`0x00C0`|&#x00C0;|
|`0x00E1`|&#x00E1;|`0x00C1`|&#x00C1;|
|`0x00E2`|&#x00E2;|`0x00C2`|&#x00C2;|
|`0x00E3`|&#x00E3;|`0x00C3`|&#x00C3;|
|`0x00E4`|&#x00E4;|`0x00C4`|&#x00C4;|
|`0x00E5`|&#x00E5;|`0x00C5`|&#x00C5;|
|`0x00E6`|&#x00E6;|`0x00C6`|&#x00C6;|
|`0x00E7`|&#x00E7;|`0x00C7`|&#x00C7;|
|`0x00E8`|&#x00E8;|`0x00C8`|&#x00C8;|
|`0x00E9`|&#x00E9;|`0x00C9`|&#x00C9;|
|`0x00EA`|&#x00EA;|`0x00CA`|&#x00CA;|
|`0x00EB`|&#x00EB;|`0x00CB`|&#x00CB;|
|`0x00EC`|&#x00EC;|`0x00CC`|&#x00CC;|
|`0x00ED`|&#x00ED;|`0x00CD`|&#x00CD;|
|`0x00EE`|&#x00EE;|`0x00CE`|&#x00CE;|
|`0x00EF`|&#x00EF;|`0x00CF`|&#x00CF;|
|`0x00F0`|&#x00F0;|`0x00D0`|&#x00D0;|
|`0x00F1`|&#x00F1;|`0x00D1`|&#x00D1;|
|`0x00F2`|&#x00F2;|`0x00D2`|&#x00D2;|
|`0x00F3`|&#x00F3;|`0x00D3`|&#x00D3;|
|`0x00F4`|&#x00F4;|`0x00D4`|&#x00D4;|
|`0x00F5`|&#x00F5;|`0x00D5`|&#x00D5;|
|`0x00F6`|&#x00F6;|`0x00D6`|&#x00D6;|
|`0x00F8`|&#x00F8;|`0x00D8`|&#x00D8;|
|`0x00F9`|&#x00F9;|`0x00D9`|&#x00D9;|
|`0x00FA`|&#x00FA;|`0x00DA`|&#x00DA;|
|`0x00FB`|&#x00FB;|`0x00DB`|&#x00DB;|
|`0x00FC`|&#x00FC;|`0x00DC`|&#x00DC;|
|`0x00FD`|&#x00FD;|`0x00DD`|&#x00DD;|
|`0x00FE`|&#x00FE;|`0x00DE`|&#x00DE;|

```
// Lower to upper case
if (character >= 0x00E0 && character <= 0x00FE && character !== 0x00D7) character -= 0x20

// Upper to lower case
if (character >= 0x00C0 && character <= 0x00DE && character !== 0x00D7) character += 0x20
```

## Latin Extended A

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x0101`|&#x0101;|`0x0100`|&#x0100;|
|`0x0103`|&#x0103;|`0x0102`|&#x0102;|
|`0x0105`|&#x0105;|`0x0104`|&#x0104;|
|`0x0107`|&#x0107;|`0x0106`|&#x0106;|
|`0x0109`|&#x0109;|`0x0108`|&#x0108;|
|`0x010B`|&#x010B;|`0x010A`|&#x010A;|
|`0x010D`|&#x010D;|`0x010C`|&#x010C;|
|`0x010F`|&#x010F;|`0x010E`|&#x010E;|
|`0x0111`|&#x0111;|`0x0110`|&#x0110;|
|`0x0113`|&#x0113;|`0x0112`|&#x0112;|
|`0x0115`|&#x0115;|`0x0114`|&#x0114;|
|`0x0117`|&#x0117;|`0x0116`|&#x0116;|
|`0x0119`|&#x0119;|`0x0118`|&#x0118;|
|`0x011B`|&#x011B;|`0x011A`|&#x011A;|
|`0x011D`|&#x011D;|`0x011C`|&#x011C;|
|`0x011F`|&#x011F;|`0x011E`|&#x011E;|
|`0x0121`|&#x0121;|`0x0120`|&#x0120;|
|`0x0123`|&#x0123;|`0x0122`|&#x0122;|
|`0x0125`|&#x0125;|`0x0124`|&#x0124;|
|`0x0127`|&#x0127;|`0x0126`|&#x0126;|
|`0x0129`|&#x0129;|`0x0128`|&#x0128;|
|`0x012B`|&#x012B;|`0x012A`|&#x012A;|
|`0x012D`|&#x012D;|`0x012C`|&#x012C;|
|`0x012F`|&#x012F;|`0x012E`|&#x012E;|
|`0x0131`|&#x0131;|`0x0049`|&#x0049;|
|`0x0133`|&#x0133;|`0x0132`|&#x0132;|
|`0x0135`|&#x0135;|`0x0134`|&#x0134;|
|`0x0137`|&#x0137;|`0x0136`|&#x0136;|
|`0x013A`|&#x013A;|`0x0139`|&#x0139;|
|`0x013C`|&#x013C;|`0x013B`|&#x013B;|
|`0x013E`|&#x013E;|`0x013D`|&#x013D;|
|`0x0140`|&#x0140;|`0x013F`|&#x013F;|
|`0x0142`|&#x0142;|`0x0141`|&#x0141;|
|`0x0144`|&#x0144;|`0x0143`|&#x0143;|
|`0x0146`|&#x0146;|`0x0145`|&#x0145;|
|`0x0148`|&#x0148;|`0x0147`|&#x0147;|
|`0x014B`|&#x014B;|`0x014A`|&#x014A;|
|`0x014D`|&#x014D;|`0x014C`|&#x014C;|
|`0x014F`|&#x014F;|`0x014E`|&#x014E;|
|`0x0151`|&#x0151;|`0x0150`|&#x0150;|
|`0x0153`|&#x0153;|`0x0152`|&#x0152;|
|`0x0155`|&#x0155;|`0x0154`|&#x0154;|
|`0x0157`|&#x0157;|`0x0156`|&#x0156;|
|`0x0159`|&#x0159;|`0x0158`|&#x0158;|
|`0x015B`|&#x015B;|`0x015A`|&#x015A;|
|`0x015D`|&#x015D;|`0x015C`|&#x015C;|
|`0x015F`|&#x015F;|`0x015E`|&#x015E;|
|`0x0161`|&#x0161;|`0x0160`|&#x0160;|
|`0x0163`|&#x0163;|`0x0162`|&#x0162;|
|`0x0165`|&#x0165;|`0x0164`|&#x0164;|
|`0x0167`|&#x0167;|`0x0166`|&#x0166;|
|`0x0169`|&#x0169;|`0x0168`|&#x0168;|
|`0x016B`|&#x016B;|`0x016A`|&#x016A;|
|`0x016D`|&#x016D;|`0x016C`|&#x016C;|
|`0x016F`|&#x016F;|`0x016E`|&#x016E;|
|`0x0171`|&#x0171;|`0x0170`|&#x0170;|
|`0x0173`|&#x0173;|`0x0172`|&#x0172;|
|`0x0175`|&#x0175;|`0x0174`|&#x0174;|
|`0x0177`|&#x0177;|`0x0176`|&#x0176;|
|`0x017A`|&#x017A;|`0x0179`|&#x0179;|
|`0x017C`|&#x017C;|`0x017B`|&#x017B;|
|`0x017E`|&#x017E;|`0x017D`|&#x017D;|

```
// Lower to upper case
if (character >= 0x0101 && character <= 0x017D && character !== 0x0149) {
    if (character % 2) character -= 1
}

// Upper to lower case
if (character >= 0x0101 && character <= 0x017D && character !== 0x0149) {
    if (!(character % 2)) character += 1
}
```

## Latin Extended B Non-European and Historic Latin

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x0183`|&#x0183;|`0x0182`|&#x0182;|
|`0x0185`|&#x0185;|`0x0184`|&#x0184;|
|`0x0188`|&#x0188;|`0x0187`|&#x0187;|
|`0x018C`|&#x018C;|`0x018B`|&#x018B;|
|`0x0192`|&#x0192;|`0x0191`|&#x0191;|
|`0x0199`|&#x0199;|`0x0198`|&#x0198;|
|`0x01A1`|&#x01A1;|`0x01A0`|&#x01A0;|
|`0x01A3`|&#x01A3;|`0x01A2`|&#x01A2;|
|`0x01A5`|&#x01A5;|`0x01A4`|&#x01A4;|
|`0x01A8`|&#x01A8;|`0x01A7`|&#x01A7;|
|`0x01AD`|&#x01AD;|`0x01AC`|&#x01AC;|
|`0x01B0`|&#x01B0;|`0x01AF`|&#x01AF;|
|`0x01B4`|&#x01B4;|`0x01B3`|&#x01B3;|
|`0x01B6`|&#x01B6;|`0x01B5`|&#x01B5;|
|`0x01B9`|&#x01B9;|`0x01B8`|&#x01B8;|
|`0x01BD`|&#x01BD;|`0x01BC`|&#x01BC;|

```
// Lower to upper case
switch (character) {
    case 0x0183:
    case 0x0185:
    case 0x0188:
    case 0x018C:
    case 0x0192:
    case 0x0199:
    case 0x01A1:
    case 0x01A3:
    case 0x01A5:
    case 0x01A8:
    case 0x01AD:
    case 0x01B0:
    case 0x01B4:
    case 0x01B6:
    case 0x01B9:
    case 0x01BD:
        character -= 1;
}

// Upper to lower case
switch (character) {
    case 0x0182:
    case 0x0184:
    case 0x0187:
    case 0x018B:
    case 0x0191:
    case 0x0198:
    case 0x01A0:
    case 0x01A2:
    case 0x01A4:
    case 0x01A7:
    case 0x01AC:
    case 0x01AF:
    case 0x01B3:
    case 0x01B5:
    case 0x01B8:
    case 0x01BC:
        character += 1;
}
```

## Latin Extended B Croatian

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x01C6`|&#x01C6;|`0x01C4`|&#x01C4;|
|`0x01C9`|&#x01C9;|`0x01C7`|&#x01C7;|
|`0x01CC`|&#x01CC;|`0x01CA`|&#x01CA;|

```
// Lower to upper case
switch (character) {
    case 0x01C6:
    case 0x01C9:
    case 0x01CC:
        character -= 2;
}

// Upper to lower case
switch (character) {
    case 0x01C4:
    case 0x01C7:
    case 0x01CA:
        character += 2;
}
```

## Latin Extended B Pinyin

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x01CE`|&#x01CE;|`0x01CD`|&#x01CD;|
|`0x01D0`|&#x01D0;|`0x01CF`|&#x01CF;|
|`0x01D2`|&#x01D2;|`0x01D1`|&#x01D1;|
|`0x01D4`|&#x01D4;|`0x01D3`|&#x01D3;|
|`0x01D6`|&#x01D6;|`0x01D5`|&#x01D5;|
|`0x01D8`|&#x01D8;|`0x01D7`|&#x01D7;|
|`0x01DA`|&#x01DA;|`0x01D9`|&#x01D9;|
|`0x01DC`|&#x01DC;|`0x01DB`|&#x01DB;|

```
// Lower to upper case
switch (character) {
    case 0x01CE:
    case 0x01D0:
    case 0x01D2:
    case 0x01D4:
    case 0x01D6:
    case 0x01D8:
    case 0x01DA:
    case 0x01DC:
        character -= 1;
}

// Upper to lower case
switch (character) {
    case 0x01CD:
    case 0x01CF:
    case 0x01D1:
    case 0x01D3:
    case 0x01D5:
    case 0x01D7:
    case 0x01D9:
    case 0x01DB:
        character += 1;
}
```

## Latin Extended B Phonetic and Historic Letters

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x01DF`|&#x01DF;|`0x01DE`|&#x01DE;|
|`0x01E1`|&#x01E1;|`0x01E0`|&#x01E0;|
|`0x01E3`|&#x01E3;|`0x01E2`|&#x01E2;|
|`0x01E5`|&#x01E5;|`0x01E4`|&#x01E4;|
|`0x01E7`|&#x01E7;|`0x01E6`|&#x01E6;|
|`0x01E9`|&#x01E9;|`0x01E8`|&#x01E8;|
|`0x01EB`|&#x01EB;|`0x01EA`|&#x01EA;|
|`0x01ED`|&#x01ED;|`0x01EC`|&#x01EC;|
|`0x01EF`|&#x01EF;|`0x01EE`|&#x01EE;|
|`0x01F3`|&#x01F3;|`0x01F1`|&#x01F1;|
|`0x01F5`|&#x01F5;|`0x01F4`|&#x01F4;|
|`0x01FB`|&#x01FB;|`0x01FA`|&#x01FA;|
|`0x01FD`|&#x01FD;|`0x01FC`|&#x01FC;|
|`0x01FF`|&#x01FF;|`0x01FE`|&#x01FE;|

```
// Lower to upper case
switch (character) {
    case 0x01DF:
    case 0x01E1:
    case 0x01E3:
    case 0x01E5:
    case 0x01E7:
    case 0x01E9:
    case 0x01EB:
    case 0x01ED:
    case 0x01EF:
    case 0x01F3:
    case 0x01F5:
    case 0x01FB:
    case 0x01FD:
    case 0x01FF:
        character -= 1;
}

// Upper to lower case
switch (character) {
    case 0x01DE:
    case 0x01E0:
    case 0x01E2:
    case 0x01E4:
    case 0x01E6:
    case 0x01E8:
    case 0x01EA:
    case 0x01EC:
    case 0x01EE:
    case 0x01F1:
    case 0x01F4:
    case 0x01FA:
    case 0x01FC:
    case 0x01FE:
        character += 1;
}
```

## Latin Extended B Slovenian and Croatian

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x0201`|&#x0201;|`0x0200`|&#x0200;|
|`0x0203`|&#x0203;|`0x0202`|&#x0202;|
|`0x0205`|&#x0205;|`0x0204`|&#x0204;|
|`0x0207`|&#x0207;|`0x0206`|&#x0206;|
|`0x0209`|&#x0209;|`0x0208`|&#x0208;|
|`0x020B`|&#x020B;|`0x020A`|&#x020A;|
|`0x020D`|&#x020D;|`0x020C`|&#x020C;|
|`0x020F`|&#x020F;|`0x020E`|&#x020E;|
|`0x0211`|&#x0211;|`0x0210`|&#x0210;|
|`0x0213`|&#x0213;|`0x0212`|&#x0212;|
|`0x0215`|&#x0215;|`0x0214`|&#x0214;|
|`0x0217`|&#x0217;|`0x0216`|&#x0216;|

```
// Lower to upper case
if (character >= 0x0201 && character <= 0x0217) {
    if (character % 2) character -= 1
}

// Upper to lower case
if (character >= 0x0200 && character <= 0x0216) {
    if (!(character % 2)) character += 1
}
```

## Latin Extended B Romanian

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
|`0x0219`|&#x0219;|`0x0218`|&#x0218;|
|`0x021B`|&#x021B;|`0x021A`|&#x021A;|

```
// Lower to upper case
switch (character) {
    case 0x0219:
    case 0x021B:
        character -= 1;
}

// Upper to lower case
switch (character) {
    case 0x0218:
    case 0x021A:
        character += 1;
}
```

## Latin Extended B Miscellaneous

|Lower Value|Lower Char|Upper Value|Upper Char|
|---|:---:|---|:---:|
