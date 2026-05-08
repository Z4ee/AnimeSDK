#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RESOLUTION_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x3A4E50)
#define UNITYENGINE_RESOLUTION_GET_REFRESHRATE_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UNITYENGINE_RESOLUTION_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define UNITYENGINE_RESOLUTION_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define UNITYENGINE_RESOLUTION_SET_REFRESHRATE_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define UNITYENGINE_RESOLUTION_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define UNITYENGINE_RESOLUTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x948560)

namespace UnityEngine
{
	inline static constexpr unsigned int Resolution_TypeDefinitionIndex = 5189;

	struct alignas(4) Resolution
	{
		::System::Int32 m_Width; // 0x10
		::System::Int32 m_Height; // 0x14
		::System::Int32 m_RefreshRate; // 0x18

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_refreshRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_REFRESHRATE_OFFSET))(this);
		}

		::System::Void set_refreshRate(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_REFRESHRATE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_TOSTRING_OFFSET))(this);
		}
	};
}
