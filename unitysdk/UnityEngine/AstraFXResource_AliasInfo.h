#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AstraFXResource_AliasMode.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXResource_AliasInfo_TypeDefinitionIndex = 4082;

	struct alignas(8) AstraFXResource_AliasInfo
	{
		::System::String* targetName; // 0x10
		::UnityEngine::AstraFXResource_AliasMode aliasMode; // 0x18
	};
}
