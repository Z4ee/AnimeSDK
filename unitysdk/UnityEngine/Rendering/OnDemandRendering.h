#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_ONDEMANDRENDERING_GETRENDERFRAMEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1B2CDF00)
#define UNITYENGINE_RENDERING_ONDEMANDRENDERING_GET_RENDERFRAMEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1B2CDED0)
#define UNITYENGINE_RENDERING_ONDEMANDRENDERING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2CDF50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OnDemandRendering_TypeDefinitionIndex = 4712;

	class OnDemandRendering : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_m_RenderFrameInterval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OnDemandRendering_TypeDefinitionIndex)->GetStaticField(0xA410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_renderFrameInterval()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING_GET_RENDERFRAMEINTERVAL_OFFSET))();
		}

		static ::System::Void GetRenderFrameInterval(::System::Int32& a1)
		{
			return ((::System::Void(*)(::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING_GETRENDERFRAMEINTERVAL_OFFSET))(a1);
		}
	};
}
