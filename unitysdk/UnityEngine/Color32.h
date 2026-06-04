#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_COLOR32_LERP_OFFSET UNITYSDK_OFFSET(0x1B282D20)
#define UNITYENGINE_COLOR32_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B282CD0)
#define UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B282960)
#define UNITYENGINE_COLOR32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3880270)
#define UNITYENGINE_COLOR32__CTOR_OFFSET UNITYSDK_OFFSET(0x3880250)

namespace UnityEngine
{
	inline static constexpr unsigned int Color32_TypeDefinitionIndex = 4202;

	struct alignas(4) Color32
	{
		::System::Int32 rgba; // 0x10
		::System::Byte r; // 0x10
		::System::Byte g; // 0x11
		::System::Byte b; // 0x12
		::System::Byte a; // 0x13

		::System::Void _ctor(::System::Byte a1, ::System::Byte a2, ::System::Byte a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		static ::UnityEngine::Color32 op_Implicit(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Color op_Implicit_1(::UnityEngine::Color32 a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		static ::UnityEngine::Color32 Lerp(::UnityEngine::Color32 a1, ::UnityEngine::Color32 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::UnityEngine::Color32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_LERP_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_TOSTRING_OFFSET))(this);
		}
	};
}
