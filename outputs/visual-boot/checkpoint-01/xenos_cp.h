#pragma once
#include <cstdint>
void XenosInitialize(uint8_t* base, uint32_t physical, uint32_t size_log2);
void XenosWriteback(uint32_t address, uint32_t block_log2);
void XenosSubmit(uint8_t* base, uint32_t write_pointer);
