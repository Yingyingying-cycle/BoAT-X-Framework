/******************************************************************************
 * Copyright (C) 2018-2021 aitos.io
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/*!@brief Define basic types for BoAT IoT SDK.

@file
boattypes.h defines types used in BoAT IoT SDK.
*/

#ifndef __BOATTYPES_H__
#define __BOATTYPES_H__


#define BOAT_OUT
#define BOAT_IN
#define BOAT_INOUT

#define BOAT_TRUE 1
#define BOAT_FALSE 0

#define __BOATSTATIC static
#define __BOATINLINE inline

// Basic Types, prefixed with "B" to avoid possible conflict with customer's typedef
typedef bool BBOOL;
typedef char BCHAR;
typedef unsigned char BUINT8;
typedef unsigned short BUINT16;
typedef unsigned int BUINT32;
typedef unsigned long long int BUINT64;
//typedef __uint128_t BUINT128;
typedef signed char BSINT8;
typedef signed short BSINT16;
typedef signed int BSINT32;
typedef signed long long int BSINT64;
//typedef __int128_t BSINT128;


typedef BSINT32 BOAT_RESULT;
typedef BUINT8 BoatAddress[20];


//!@brief Blockchain Protocol types
typedef enum
{
    BOAT_PROTOCOL_UNKNOWN = 0,     //!< Placeholder for unknown protocol
    BOAT_PROTOCOL_ETHEREUM,        //!< Ethereum
    BOAT_PROTOCOL_HLFABRIC,        //!< HyperLedger Fabric
    BOAT_PROTOCOL_PLATONE          //!< PlatONE Enterprise consortium chain
}BoatProtocolType;

//!@brief common struct for variable length fields
typedef struct TBoatFieldVariable
{
    BUINT8 *field_ptr;  //!< The address of the field storage. The storage MUST be allocated before use.
    BUINT32 field_len;  //!< The length of the field in byte
}BoatFieldVariable;

//!@brief common struct for 4-byte (32-bit) length fields
typedef struct TBoatFieldMax4B
{
    BUINT8 field[4];     //!< Field storage
    BUINT32 field_len;   //!< The effective length of the field in byte
}BoatFieldMax4B;

//!@brief common struct for 32-byte (256-bit) length transaction fields
typedef struct TBoatFieldMax32B
{
    BUINT8 field[32];    //!< Field storage
    BUINT32 field_len;   //!< The effective length of the field in byte
}BoatFieldMax32B;

//!@brief common struct for 8-byte (64-bit) length transaction fields
typedef struct TBoatFieldMax8B
{
    BUINT8 field[8];     //!< Field storage
    BUINT32 field_len;   //!< The effective length of the field in byte
}BoatFieldMax8B;      

#endif
