#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class GlobalBufferManager_HistoryBuffers; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_GLOBALHISTORYBUFFERDATAS_RELEASE_OFFSET UNITYSDK_OFFSET(0x192A29C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_GLOBALHISTORYBUFFERDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x192A2C40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int WaterInteractionPass_GlobalHistoryBufferDatas_TypeDefinitionIndex = 30544;

	class WaterInteractionPass_GlobalHistoryBufferDatas : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::NAPRenderPipeline0::GlobalBufferManager_HistoryBuffers*>* hbs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_GLOBALHISTORYBUFFERDATAS__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_GLOBALHISTORYBUFFERDATAS_RELEASE_OFFSET))(this);
		}
	};
}
