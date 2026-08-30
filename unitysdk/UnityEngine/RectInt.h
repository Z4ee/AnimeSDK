#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RECTINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BBCCC0)
#define UNITYENGINE_RECTINT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8A3A0)
#define UNITYENGINE_RECTINT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define UNITYENGINE_RECTINT_GET_X_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_RECTINT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1E120)
#define UNITYENGINE_RECTINT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x154E60)
#define UNITYENGINE_RECTINT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xDAC0)
#define UNITYENGINE_RECTINT_SET_X_OFFSET UNITYSDK_OFFSET(0x2E950)
#define UNITYENGINE_RECTINT_SET_Y_OFFSET UNITYSDK_OFFSET(0x2200)
#define UNITYENGINE_RECTINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BBCCB0)
#define UNITYENGINE_RECTINT__CTOR_OFFSET UNITYSDK_OFFSET(0x8AFC0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectInt_TypeDefinitionIndex = 4081;

	struct alignas(4) RectInt
	{
		::System::Int32 m_XMin; // 0x10
		::System::Int32 m_YMin; // 0x14
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_X_OFFSET))(this, a1);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_Y_OFFSET))(this, a1);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::RectInt a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_EQUALS_OFFSET))(this, a1);
		}
	};
}
