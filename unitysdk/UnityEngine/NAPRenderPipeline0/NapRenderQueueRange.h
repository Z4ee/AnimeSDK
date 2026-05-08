#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERQUEUERANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F03B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderQueueRange_TypeDefinitionIndex = 5843;

	class NapRenderQueueRange : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::RenderQueueRange* StaticGet_transparent()
		{
			return (::UnityEngine::Rendering::RenderQueueRange*)Il2CppClass::FromTypeDefinitionIndex(NapRenderQueueRange_TypeDefinitionIndex)->GetStaticField(0x2390);
		}
		static ::UnityEngine::Rendering::RenderQueueRange* StaticGet_transparentTop()
		{
			return (::UnityEngine::Rendering::RenderQueueRange*)Il2CppClass::FromTypeDefinitionIndex(NapRenderQueueRange_TypeDefinitionIndex)->GetStaticField(0x2398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERQUEUERANGE__CCTOR_OFFSET))();
		}
	};
}
