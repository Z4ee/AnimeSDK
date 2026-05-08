#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_ONDEMANDRENDERING_GETRENDERFRAMEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1B2F5C80)
#define UNITYENGINE_RENDERING_ONDEMANDRENDERING_GET_RENDERFRAMEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1B2F5C20)
#define UNITYENGINE_RENDERING_ONDEMANDRENDERING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F5D30)
#define UNITYENGINE_RENDERING_ONDEMANDRENDERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F5D20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OnDemandRendering_TypeDefinitionIndex = 6192;

	class OnDemandRendering : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_m_RenderFrameInterval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OnDemandRendering_TypeDefinitionIndex)->GetStaticField(0x2560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_renderFrameInterval()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING_GET_RENDERFRAMEINTERVAL_OFFSET))();
		}

		static ::System::Void GetRenderFrameInterval(::System::Int32& frameInterval)
		{
			return ((::System::Void(*)(::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING_GETRENDERFRAMEINTERVAL_OFFSET))(frameInterval);
		}
	};
}
