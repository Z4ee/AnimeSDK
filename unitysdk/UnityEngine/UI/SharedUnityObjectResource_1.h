#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SharedUnityObjectResource_1_TypeDefinitionIndex = 76045;

	template <typename T>
	struct SharedUnityObjectResource_1
	{
		::System::String* _AssetPath_k__BackingField; // 0x0
		::System::Int32 _RefCount_k__BackingField; // 0x0
		T _Asset_k__BackingField; // 0x0
		::Foundation::AssetRequestHandle AssetHandle; // 0x0
	};
}
