#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ScreenPlayData;
namespace System { class String; }

#define TV_WALL_GETSHOWDATA_OFFSET UNITYSDK_OFFSET(0x1AE49EB0)
#define TV_WALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE49F50)

inline static constexpr unsigned int TV_Wall_TypeDefinitionIndex = 81732;

class TV_Wall : public ::System::Object
{
public:
	::System::String* IsOpenEditor; // 0x10
	::Il2CppArray<::ScreenPlayData*>* tv_wall_group; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TV_WALL__CTOR_OFFSET))(this);
	}

	::ScreenPlayData* GetShowData(::System::Int32 x, ::System::Int32 y)
	{
		return ((::ScreenPlayData*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TV_WALL_GETSHOWDATA_OFFSET))(this, x, y);
	}
};
