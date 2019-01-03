//
// Created by peleg on 1/3/19.
//

#include "../include/ClientEncoderDecoder.h"

public class ClientEncoderDecoder {

    byte[] encode (string s){

    }

    string decode (byte[] bytes){

    }

    short bytesToShort(char* bytesArr)
    {
        short result = (short)((bytesArr[0] & 0xff) << 8);
        result += (short)(bytesArr[1] & 0xff);
        return result;
    }

    void shortToBytes(short num, char* bytesArr)
    {
        bytesArr[0] = ((num >> 8) & 0xFF);
        bytesArr[1] = (num & 0xFF);
    }


};