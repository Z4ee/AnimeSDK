#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RESOLUTION_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E110)
#define UNITYENGINE_RESOLUTION_GET_REFRESHRATE_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define UNITYENGINE_RESOLUTION_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_RESOLUTION_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x21F0)
#define UNITYENGINE_RESOLUTION_SET_REFRESHRATE_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define UNITYENGINE_RESOLUTION_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_RESOLUTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x388CDB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Resolution_TypeDefinitionIndex = 4115;

	struct alignas(4) Resolution
	{
		::System::Int32 m_Width; // 0x10
		::System::Int32 m_Height; // 0x14
		::System::Int32 m_RefreshRate; // 0x18

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 get_refreshRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_REFRESHRATE_OFFSET))(this);
		}

		::System::Void set_refreshRate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_REFRESHRATE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_TOSTRING_OFFSET))(this);
		}
	};
}
