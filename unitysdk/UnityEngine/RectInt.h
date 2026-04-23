#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RECTINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E7C60)
#define UNITYENGINE_RECTINT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define UNITYENGINE_RECTINT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_RECTINT_GET_X_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_RECTINT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define UNITYENGINE_RECTINT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x22D8250)
#define UNITYENGINE_RECTINT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_RECTINT_SET_X_OFFSET UNITYSDK_OFFSET(0x299E0)
#define UNITYENGINE_RECTINT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_RECTINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22E7C50)
#define UNITYENGINE_RECTINT__CTOR_OFFSET UNITYSDK_OFFSET(0x76020)

namespace UnityEngine
{
	inline static constexpr unsigned int RectInt_TypeDefinitionIndex = 3894;

	struct alignas(4) RectInt
	{
		::System::Int32 m_XMin; // 0x10
		::System::Int32 m_YMin; // 0x14
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C

		::System::Void _ctor(::System::Int32 xMin, ::System::Int32 yMin, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT__CTOR_OFFSET))(this, xMin, yMin, width, height);
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_Y_OFFSET))(this, value);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::RectInt other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_EQUALS_OFFSET))(this, other);
		}
	};
}
