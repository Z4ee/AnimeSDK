#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_BASE64STREAM_READSTATEINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x1CC15B90)
#define SYSTEM_NET_BASE64STREAM_READSTATEINFO_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1CC15B70)
#define SYSTEM_NET_BASE64STREAM_READSTATEINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x1CC15BA0)
#define SYSTEM_NET_BASE64STREAM_READSTATEINFO_SET_VAL_OFFSET UNITYSDK_OFFSET(0x1CC15B80)
#define SYSTEM_NET_BASE64STREAM_READSTATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC13A60)

namespace System::Net
{
	inline static constexpr unsigned int Base64Stream_ReadStateInfo_TypeDefinitionIndex = 3435;

	class Base64Stream_ReadStateInfo : public ::System::Object
	{
	public:
		::System::Byte val; // 0x10
		::System::Byte pos; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READSTATEINFO__CTOR_OFFSET))(this);
		}

		::System::Byte get_Val()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READSTATEINFO_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READSTATEINFO_SET_VAL_OFFSET))(this, value);
		}

		::System::Byte get_Pos()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READSTATEINFO_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READSTATEINFO_SET_POS_OFFSET))(this, value);
		}
	};
}
