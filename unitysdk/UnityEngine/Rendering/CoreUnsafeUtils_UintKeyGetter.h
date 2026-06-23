#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_UINTKEYGETTER_GET_OFFSET UNITYSDK_OFFSET(0x911820)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_UintKeyGetter_TypeDefinitionIndex = 18261;

	struct alignas(1) CoreUnsafeUtils_UintKeyGetter
	{
		::System::UInt32 Get(::System::UInt32& v)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_UINTKEYGETTER_GET_OFFSET))(this, v);
		}
	};
}
