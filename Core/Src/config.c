/*
 * config.c
 *
 *  Created on: Mar 23, 2022
 *      Author: umutediz
 */

#include <m24c16.h>
#include "config.h"
#include "utils.h"

tConfig GlobalConfig;

union receiveMap {
	tConfig configStruct;
	uint8_t arr[sizeof(tConfig)];
} raw;

tConfigReturn parseConfig(tConfig *conf, uint16_t size) {
	if (conf == NULL) {
		return ConfigFalse;
	}

	uint32_t crc = *((uint32_t*) (raw.arr + size - 1 - sizeof(crc)));
	if (crc == CRC_Calculate(raw.arr, size - sizeof(crc))) {
		*conf = raw.configStruct;
		return ConfigTrue;
	}

	return ConfigFalse;

}

tConfigReturn readConfig(tConfig *conf) {
	uint16_t conf_size;
	if (EEPROMRead(CONFIG_SIZE_BYTE_ADDR, CONFIG_SIZE_LEN, (uint8_t*) (&conf_size), CONFIG_TRY_COUNT) == EEPROMTrue) {
		if (conf_size >= sizeof(raw.arr)) {
			if (EEPROMRead(CONFIG_START_BYTE_ADDR, conf_size, raw.arr, CONFIG_TRY_COUNT) == EEPROMTrue) {
				return parseConfig(conf, conf_size);
			}
		}
	}
	defaultConfig(conf);
	return ConfigFalse;
}

tConfigReturn overrideConfig(tConfig *conf) {
	if (conf == NULL) {
		return ConfigFalse;
	}
	GlobalConfig = *conf;
	return ConfigTrue;
}

tConfigReturn defaultConfig(tConfig *conf) {
	conf->config_size = sizeof(tConfig);
	conf->bb_pot_total = 20000;
	conf->stw_pot_total = 10000;
	conf->R1 = 1000;
	conf->R2 = 2000;
	conf->vpot = 5 * 1000;
	conf->sw_revision = 0x00000000;
	conf->hw_revision = 0x00010100;
	conf->baudrate = 115200;
	return ConfigTrue;
}

