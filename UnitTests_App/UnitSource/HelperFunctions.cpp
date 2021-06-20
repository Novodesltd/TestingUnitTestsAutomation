/*
 * HelperFunctions.cpp
 *
 *  Created on: Feb 9, 2021
 *      Author: Eyal
 */

#include <UnitTestsMain.h>
#include <mutex>
#include <thread>
#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif

enum
{
	E_LOCKED = true,
	E_UNLOCKED = false
};

std::mutex mutx;

/******************************************************//*!
_Description Updated: Feb 9, 2021, by Eyal _<br>
Brief
---
This function locks and unlocks a mutex. This is relevant when working with threads.

Full Description
---
Nothing more to elaborate.

@retval
void
*******************************************************/
void name(void)
{

}
void MutexLock(bool bLock)
{
	static pthread_t s_CurrentLockingThread = 0;	// EG 09.02.2021: Use current thread ID to help prevent deadlocks in case of the same thread that locked the mutex tries to lock it again.
	static uint32_t s_ulInnerLocksCounter = 0;	// EG 09.02.2021: This counter exists because in the application it is possible to enter the same function recursively several times. If that were to happen we would enter a deadlock. The mechanism that uses this counter is here to prevent that.

	if(bLock == E_LOCKED)
	{
		if(s_CurrentLockingThread == pthread_self())	// EG 09.02.2021: If this is the same thread reentering its own lock then let him pass.
		{
			s_ulInnerLocksCounter++;
			return;
		}

		mutx.lock();
		s_CurrentLockingThread = pthread_self();
	}
	else // bLock = E_UNLOCKED
	{
		if(s_ulInnerLocksCounter==0)
		{
			mutx.unlock();
			s_CurrentLockingThread = 0;
		}
		else
			s_ulInnerLocksCounter--;
	}
}

#ifdef __cplusplus
}
#endif
