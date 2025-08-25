//
// Created by KASYAP on 23-06-2024.
//

#include "NibbleArray.h"
using namespace std;

NibbleArray::NibbleArray(const size_t size1, const uint8_t val) {
        size = size1, arr.resize(size / 2 + 1, val) ;
}

uint8_t NibbleArray::get(const size_t pos) const {
        size_t i = pos / 2;
        uint8_t val = this->arr.at(i);
        //hexadecimal 0x0F = 00001111;
        if (pos % 2) {
                return val & 0x0F;
        }
        else {
                return val >> 4;
        }
}

void NibbleArray::set(const size_t pos, const uint8_t val) {
        size_t i = pos / 2;
        uint8_t currVal = this->arr.at(i);
        //hexa decimal 0xF0 = 11110000
        if (pos % 2) {
                this->arr.at(i) = (currVal & 0xF0) | (val & 0x0F);

        } else {
                this->arr.at(i) = (currVal & 0x0F) | (val << 4);
        }
}

uint8_t *NibbleArray::data() {
        return this->arr.data();
}

size_t NibbleArray::storageSize() const {
        return this->arr.size();
}

void NibbleArray::inflate(vector<uint8_t> &dest) const {
        dest.reserve(this->size);

        for (unsigned i = 0; i < this->size; ++i)
                dest.push_back(this->get(i));
}

void NibbleArray::reset(const uint8_t val) {
        fill(this->arr.begin(), this->arr.end(), val);
}