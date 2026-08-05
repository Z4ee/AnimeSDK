#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UIELEMENTS_UIR_BMPALLOC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D00FFE0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int BMPAlloc_TypeDefinitionIndex = 28215;

	struct alignas(4) BMPAlloc
	{
		static ::UnityEngine::UIElements::UIR::BMPAlloc* StaticGet_Invalid()
		{
			return (::UnityEngine::UIElements::UIR::BMPAlloc*)Il2CppClass::FromTypeDefinitionIndex(BMPAlloc_TypeDefinitionIndex)->GetStaticField(0x7770);
		}
		::System::Int32 page; // 0x10
		::System::UInt16 pageLine; // 0x14
		::System::Byte bitIndex; // 0x16
		::System::Byte owned; // 0x17

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BMPALLOC__CCTOR_OFFSET))();
		}
	};
}
