/*
 * CyclicBuffer.h
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#ifndef APPLICATION_CYCLICBUFFER_H_
#define APPLICATION_CYCLICBUFFER_H_
#include <stdbool.h>

/*********************************************************************
 * CONSTANTS
 */

#define iArraySize  30

/*********************************************************************
 * TYPEDEFS
 */
typedef enum
{
    eCYCLE_MODE_0, // start - cur - end
    eCYCLE_MODE_1, // end - start - cur
    eCYCLE_MODE_2, // cur - end - start
}eCycleOrderModes;

typedef struct
{
    int iPointIndex;
    double dPointValue;
}DoublePoint;

typedef struct
{
    int iStart;
    int iCount;
    DoublePoint dpArray[iArraySize];
} CyclicDoublePointArray;


/*********************************************************************
 * FUNCTIONS
 */

/*
 * Task creation function for the Simple BLE Peripheral.
 */

void CyclicDoubleRemoveFirstPoint(CyclicDoublePointArray *ptrCdpa);
DoublePoint* CyclicDoubleGetPoint(CyclicDoublePointArray *ptrCdpa, int iIndex);
bool CyclicDoubleAddPoint(CyclicDoublePointArray *ptrCdpa, DoublePoint dPoint);


#endif /* APPLICATION_CYCLICBUFFER_H_ */
