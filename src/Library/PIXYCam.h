/*
 * PIXYCode.h
 *
 *  Created on: Sep 13, 2016
 *      Author: Team 172
 */

#ifndef SRC_LIBRARY_PIXYCAM_H_
#define SRC_LIBRARY_PIXYCAM_H_
#include "SensorBase.h"
#include "SPI.h"
#include "LiveWindow/LiveWindowSendable.h"

#define PIXY_ARRAYSIZE              100
#define PIXY_START_WORD             0xaa55
#define PIXY_START_WORD_CC          0xaa56
#define PIXY_START_WORDX            0x55aa
#define PIXY_SERVO_SYNC             0xff
#define PIXY_CAM_BRIGHTNESS_SYNC    0xfe
#define PIXY_LED_SYNC               0xfd
#define PIXY_OUTBUF_SIZE            64
#define PIXY_SYNC_BYTE              0x5a
#define PIXY_SYNC_BYTE_DATA         0x5b


// data types
typedef enum
{
    NORMAL_BLOCK,
    CC_BLOCK // color code block
} BlockType;

#define N_BLOCKS 16
#define PORT SPI::kOnboardCS0

typedef struct
{
  uint16_t signature;
  uint16_t x;
  uint16_t y;
  uint16_t width;
  uint16_t height;
  uint16_t angle; // angle is only available for color coded blocks
} Block;


/**
 * PIXY Camera on SPI.
 *
 * This class allows access to an Analog Devices PIXYCam via SPI.
 * This class assumes the sensor is wired in 4-wire SPI mode.
 */
class PIXYCam : protected SPI
{
                    //public LiveWindowSendable{
private:


public:
  PIXYCam(SPI::Port port);
  virtual ~PIXYCam() = default;

  Block g_blocks[PIXY_ARRAYSIZE];

  // Accelerometer interface
  uint16_t getWord();
  int send(uint8_t *data, int len);
  void init();
  int getStart(void);
  uint16_t getBlocks(uint16_t maxBlocks);
  int setServos(uint16_t s0, uint16_t s1);
  int setBrightness(uint8_t brightness);
  int setLED(uint8_t r, uint8_t g, uint8_t b);
};



#endif /* SRC_LIBRARY_PIXYCAM_H_ */
