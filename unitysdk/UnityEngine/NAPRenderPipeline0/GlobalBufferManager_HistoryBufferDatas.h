#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class GlobalBufferManager_HistoryBuffers; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_HISTORYBUFFERDATAS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D128920)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_HISTORYBUFFERDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D128B60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GlobalBufferManager_HistoryBufferDatas_TypeDefinitionIndex = 6025;

	class GlobalBufferManager_HistoryBufferDatas : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::NAPRenderPipeline0::GlobalBufferManager_HistoryBuffers*>* hbs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_HISTORYBUFFERDATAS__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_HISTORYBUFFERDATAS_RELEASE_OFFSET))(this);
		}
	};
}
