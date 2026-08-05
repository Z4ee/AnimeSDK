#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PerObjectShadowResolveData.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawPerObjectShadowParams_TypeDefinitionIndex = 5932;

	struct alignas(8) DrawPerObjectShadowParams
	{
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::PerObjectShadowResolveData>* ResolveData; // 0x10
		::UnityEngine::Vector2 AtlasSize; // 0x18
		::System::Int32 Count; // 0x20
	};
}
