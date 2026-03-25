#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_COLOR32_LERP_OFFSET UNITYSDK_OFFSET(0x189F76B0)
#define UNITYENGINE_COLOR32_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x189F7660)
#define UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x189F72F0)
#define UNITYENGINE_COLOR32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2110940)
#define UNITYENGINE_COLOR32__CTOR_OFFSET UNITYSDK_OFFSET(0x2110920)

namespace UnityEngine
{
	inline static constexpr unsigned int Color32_TypeDefinitionIndex = 4026;

	struct alignas(4) Color32
	{
		::System::Int32 rgba; // 0x10
		::System::Byte r; // 0x10
		::System::Byte g; // 0x11
		::System::Byte b; // 0x12
		::System::Byte a; // 0x13

		::System::Void _ctor(::System::Byte r, ::System::Byte g, ::System::Byte b, ::System::Byte a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32__CTOR_OFFSET))(this, r, g, b, a);
		}

		/*
		static ::UnityEngine::Color32 op_Implicit(::UnityEngine::Color c)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET))(c);
		}
		*/

		/*
		static ::UnityEngine::Color op_Implicit_1(::UnityEngine::Color32 c)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_OP_IMPLICIT_1_OFFSET))(c);
		}
		*/

		static ::UnityEngine::Color32 Lerp(::UnityEngine::Color32 a, ::UnityEngine::Color32 b, ::System::Single t)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::UnityEngine::Color32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_LERP_OFFSET))(a, b, t);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_TOSTRING_OFFSET))(this);
		}
	};
}
