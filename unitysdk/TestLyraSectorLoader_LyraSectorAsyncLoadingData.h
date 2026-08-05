#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"

#define TESTLYRASECTORLOADER_LYRASECTORASYNCLOADINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AE7F0)

inline static constexpr unsigned int TestLyraSectorLoader_LyraSectorAsyncLoadingData_TypeDefinitionIndex = 27865;

class TestLyraSectorLoader_LyraSectorAsyncLoadingData : public ::System::Object
{
public:
	::LyraSector::LyraSectorCoord coord; // 0x10
	::System::Boolean isForDistanceField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_LYRASECTORASYNCLOADINGDATA__CTOR_OFFSET))(this);
	}
};
