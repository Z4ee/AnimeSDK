#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::NAPRenderPipeline0 { class LensFlareDataElementSRP; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP_ONENABLED_OFFSET UNITYSDK_OFFSET(0x1E83E200)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E83E210)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP_TRYREFRESHTEXTURES_OFFSET UNITYSDK_OFFSET(0x1E83D620)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E83E220)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareDataSRP_NativeSRP_TypeDefinitionIndex = 18480;

	class LensFlareDataSRP_NativeSRP : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::LensFlareDataElementSRP*>* elements; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Void OnEnabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP_ONENABLED_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP_ONVALIDATE_OFFSET))(this);
		}

		::System::Void TryRefreshTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATASRP_NATIVESRP_TRYREFRESHTEXTURES_OFFSET))(this);
		}
	};
}
