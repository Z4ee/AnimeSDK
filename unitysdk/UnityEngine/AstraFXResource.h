#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AstraFXResource_AliasInfo.h"
#include "unitysdk/UnityEngine/AstraFXResource_BufferInfo.h"
#include "unitysdk/UnityEngine/AstraFXResource_TextureInfo.h"
#include "unitysdk/UnityEngine/AstraFXResource_Type.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXResource_TypeDefinitionIndex = 4077;

	struct alignas(8) AstraFXResource
	{
		::UnityEngine::AstraFXResource_Type type; // 0x10
		::System::String* name; // 0x18
		::System::Boolean doubleBuffer; // 0x20
		::UnityEngine::AstraFXResource_BufferInfo buffer; // 0x24
		::UnityEngine::AstraFXResource_TextureInfo texture; // 0x2C
		::UnityEngine::AstraFXResource_AliasInfo aliasInfo; // 0x48
	};
}
