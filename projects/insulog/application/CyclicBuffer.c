/*
 * CyclicBuffer.c
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */
#include <stdbool.h>
#include "CyclicBuffer.h"

/*********************************************************************
 * PUBLIC FUNCTIONS
 */

/*********************************************************************
 * @fn      CyclicDoubleRemoveFirstPoint
 *
 * @brief   Task creation function for the Glucose Sensor application.
 *
 * @param   none
 *
 * @return  none
 */
void CyclicDoubleRemoveFirstPoint(CyclicDoublePointArray *ptrCdpa)
{
    if (ptrCdpa->iCount > 0)
    {
                ptrCdpa->dpArray[ptrCdpa->iStart].dPointValue = 0;
                ptrCdpa->dpArray[ptrCdpa->iStart].iPointIndex = 0;
        ptrCdpa->iStart = (ptrCdpa->iStart + 1) % iArraySize;
        --(ptrCdpa->iCount);
    }
}

/*********************************************************************
 * @fn      CyclicDoubleGetPoint
 *
 * @brief   Task creation function for the Glucose Sensor application.
 *
 * @param   none
 *
 * @return  none
 */
DoublePoint* CyclicDoubleGetPoint(CyclicDoublePointArray *ptrCdpa, int iIndex)
{
    DoublePoint* dpPoint = '\0';

    if (iIndex < ptrCdpa->iCount)
    {
        dpPoint = &(ptrCdpa->dpArray[(ptrCdpa->iStart + iIndex) % iArraySize]);
    }
    return dpPoint;
}

/*********************************************************************
 * @fn      CyclicDoubleAddPoint
 *
 * @brief   Task creation function for the Glucose Sensor application.
 *
 * @param   none
 *
 * @return  none
 */
 bool CyclicDoubleAddPoint(CyclicDoublePointArray *ptrCdpa, DoublePoint dPoint)
{
        bool bReturnVal = false;
        if (ptrCdpa->iCount < iArraySize)
        {
                ptrCdpa->dpArray[(ptrCdpa->iStart + ptrCdpa->iCount) % iArraySize].dPointValue = dPoint.dPointValue;
                ptrCdpa->dpArray[(ptrCdpa->iStart + ptrCdpa->iCount++) % iArraySize].iPointIndex = dPoint.iPointIndex;

                bReturnVal = true;
        }
        return bReturnVal;
}


