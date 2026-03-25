#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LightblockStateEnum.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define VOLUMEDATA_METHOD_1_0FEB9A22B18A88E7_OFFSET UNITYSDK_OFFSET(0xAC72A80)
#define VOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC72B10)

inline static constexpr unsigned int VolumeData_TypeDefinitionIndex = 38260;

class VolumeData : public ::System::Object
{
public:
	::System::String* blockName; // 0x10
	::RPG::Client::OpenWorld::StreamingLightEnum lightMode; // 0x18
	::LightblockStateEnum blockState1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMEDATA__CTOR_OFFSET))(this);
	}

	::VolumeData* Method_1_0FEB9A22B18A88E7()
	{
		return ((::VolumeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMEDATA_METHOD_1_0FEB9A22B18A88E7_OFFSET))(this);
	}
};
