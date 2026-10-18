#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/WwiseObjectType.h"

namespace System { class String; }

#define WWISEOBJECTREFERENCE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1F6371D0)
#define WWISEOBJECTREFERENCE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1F60A060)
#define WWISEOBJECTREFERENCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1F6371E0)
#define WWISEOBJECTREFERENCE_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1F6371C0)
#define WWISEOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F636FA0)

inline static constexpr unsigned int WwiseObjectReference_TypeDefinitionIndex = 44885;

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
