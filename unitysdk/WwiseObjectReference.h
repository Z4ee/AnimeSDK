#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/WwiseObjectType.h"

namespace System { class String; }

#define WWISEOBJECTREFERENCE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x18C4F6B0)
#define WWISEOBJECTREFERENCE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x18C229F0)
#define WWISEOBJECTREFERENCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x18C4F6D0)
#define WWISEOBJECTREFERENCE_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x18C4F6C0)
#define WWISEOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4F530)

inline static constexpr unsigned int WwiseObjectReference_TypeDefinitionIndex = 34621;

class WwiseObjectReference : public ::UnityEngine::ScriptableObject
{
public:
	::System::String* objectName; // 0x18
	::System::UInt32 id; // 0x20
	::System::String* guid; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE__CTOR_OFFSET))(this);
	}

	::System::Guid get_Guid()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_GET_GUID_OFFSET))(this);
	}

	::System::String* get_ObjectName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_GET_OBJECTNAME_OFFSET))(this);
	}

	::System::String* get_DisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_GET_DISPLAYNAME_OFFSET))(this);
	}

	::System::UInt32 get_Id()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEOBJECTREFERENCE_GET_ID_OFFSET))(this);
	}
};
