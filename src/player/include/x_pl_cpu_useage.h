// ntdll!NtQuerySystemInformation (NT specific!)
//
// The function copies the system information of the
// specified type into a buffer
//
// NTSYSAPI
// NTSTATUS
// NTAPI
// NtQuerySystemInformation(
//    IN UINT SystemInformationClass,		// information type
//    OUT PVOID SystemInformation,			// pointer to buffer
//    IN ULONG SystemInformationLength,		// buffer size in bytes
//    OUT PULONG ReturnLength OPTIONAL		// pointer to a 32-bit
//                                       // variable that receives
//                                       // the number of bytes
//                                       // written to the buffer
// );
#pragma once

#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include "x_pl_thread.h"

#define SystemBasicInformation				0
#define SystemPerformanceInformation	2
#define SystemTimeInformation				3

#define Li2Double(x) ((double)((x).HighPart) * 4.294967296E9 + (double)((x).LowPart))
typedef struct
{
	DWORD	dwUnknown1;
	ULONG		uKeMaximumIncrement;
	ULONG		uPageSize;
	ULONG		uMmNumberOfPhysicalPages;
	ULONG		uMmLowestPhysicalPage;
	ULONG		uMmHighestPhysicalPage;
	ULONG		uAllocationGranularity;
	PVOID		pLowestUserAddress;
	PVOID		pMmHighestUserAddress;
	ULONG		uKeActiveProcessors;
	BYTE			bKeNumberProcessors;
	BYTE			bUnknown2;
	WORD		wUnknown3;
} SYSTEM_BASIC_INFORMATION;

typedef struct
{
	LARGE_INTEGER	liIdleTime;
	DWORD				dwSpare[76];
} SYSTEM_PERFORMANCE_INFORMATION;

typedef struct
{
	LARGE_INTEGER	liKeBootTime;
	LARGE_INTEGER	liKeSystemTime;
	LARGE_INTEGER	liExpTimeZoneBias;
	ULONG					uCurrentTimeZoneId;
	DWORD				dwReserved;
} SYSTEM_TIME_INFORMATION;

typedef LONG (WINAPI *PROCNTQSI)(UINT,PVOID,ULONG,PULONG);

class J_PlCpuInfo
{
public:
	BOOL Init();
	BOOL GetInfo(UINT &nInfo);

private:
	//J_PlMutexLock											m_lock;
	PROCNTQSI												m_NtQuerySystemInformation;
	SYSTEM_PERFORMANCE_INFORMATION m_SysPerfInfo;
	SYSTEM_TIME_INFORMATION					m_SysTimeInfo;
	SYSTEM_BASIC_INFORMATION					m_SysBaseInfo;
	double														m_dbIdleTime;
	double														m_dbSystemTime;
	LONG														m_status;
	LARGE_INTEGER										m_liOldIdleTime;
	LARGE_INTEGER										m_liOldSystemTime;
};