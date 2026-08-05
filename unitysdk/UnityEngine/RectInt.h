#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RECTINT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0FDD0)
#define UNITYENGINE_RECTINT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x330F60)
#define UNITYENGINE_RECTINT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define UNITYENGINE_RECTINT_GET_X_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_RECTINT_GET_Y_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_RECTINT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x599190)
#define UNITYENGINE_RECTINT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define UNITYENGINE_RECTINT_SET_X_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_RECTINT_SET_Y_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define UNITYENGINE_RECTINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA54790)
#define UNITYENGINE_RECTINT__CTOR_OFFSET UNITYSDK_OFFSET(0x6245C0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectInt_TypeDefinitionIndex = 5165;

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
