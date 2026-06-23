#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterType_TypeDefinitionIndex = 4065;

	enum class PerformanceCounterType : ::System::Int32
	{
		AverageBase = 1073939458,
		AverageCount64 = 1073874176,
		AverageTimer32 = 805438464,
		CounterDelta32 = 4195328,
		CounterDelta64 = 4195584,
		CounterMultiBase = 1107494144,
		CounterMultiTimer = 574686464,
		CounterMultiTimer100Ns = 575735040,
		CounterMultiTimer100NsInverse = 592512256,
		CounterMultiTimerInverse = 591463680,
		CounterTimer = 541132032,
		CounterTimerInverse = 557909248,
		CountPerTimeInterval32 = 4523008,
		CountPerTimeInterval64 = 4523264,
		ElapsedTime = 807666944,
		NumberOfItems32 = 65536,
		NumberOfItems64 = 65792,
		NumberOfItemsHEX32 = 0,
		NumberOfItemsHEX64 = 256,
		RateOfCountsPerSecond32 = 272696320,
		RateOfCountsPerSecond64 = 272696576,
		RawBase = 1073939459,
		RawFraction = 537003008,
		SampleBase = 1073939457,
		SampleCounter = 4260864,
		SampleFraction = 549585920,
		Timer100Ns = 542180608,
		Timer100NsInverse = 558957824,
	};
}
