/*
 * config.h
 *
 *  Created on: Mar 23, 2022
 *      Author: umutediz
 */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

#define SW_REVISION_BYTE3 (0)
#define SW_REVISION_BYTE2 (0)
#define SW_REVISION_BYTE1 (1)
#define SW_REVISION_BYTE0 (0)

#define HW_REVISION_BYTE3 (0)
#define HW_REVISION_BYTE2 (1)
#define HW_REVISION_BYTE1 (1)
#define HW_REVISION_BYTE0 (0)

#define CONFIG_SIZE_BYTE_ADDR  (0x00)
#define CONFIG_SIZE_LEN        (2)
#define CONFIG_START_BYTE_ADDR (0x02)
#define CONFIG_TRY_COUNT       (3)

typedef enum ConfigReturn {
	ConfigTrue,
	ConfigFalse
} tConfigReturn;

typedef struct Config {
	uint16_t config_size;
	uint32_t hw_revision;
	uint32_t sw_revision;
	uint32_t bb_pot_total;
	uint32_t stw_pot_total;
	uint32_t R1;
	uint32_t R2;
	uint16_t vpot;
	uint32_t baudrate;
	uint32_t crc;
}__attribute__((packed)) tConfig;

tConfigReturn readConfig(tConfig *conf);
tConfigReturn overrideConfig(tConfig *conf);
tConfigReturn defaultConfig(tConfig *conf);

#endif /* INC_CONFIG_H_ */
