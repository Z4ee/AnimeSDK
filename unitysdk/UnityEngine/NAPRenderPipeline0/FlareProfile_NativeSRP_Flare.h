#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE_PACK2VECTOR4_OFFSET UNITYSDK_OFFSET(0x1D6F82C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE_PACKVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x1D6F81F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE_PACKVECTOR2_OFFSET UNITYSDK_OFFSET(0x1D6F8130)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F85B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FlareProfile_NativeSRP_Flare_TypeDefinitionIndex = 5693;

	class FlareProfile_NativeSRP_Flare : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Vector2 scaler; // 0x18
		::System::Single rotate; // 0x20
		::System::Single intensity; // 0x24
		::UnityEngine::Texture2D* tex; // 0x28
		::System::Single texScaleInAtlas; // 0x30
		::UnityEngine::Vector4 atlas_offset_scale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE__CTOR_OFFSET))(this);
		}

		::System::Single PackVector2(::System::Single x, ::System::Single y)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE_PACKVECTOR2_OFFSET))(this, x, y);
		}

		::System::Single PackVector2_1(::UnityEngine::Vector2 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE_PACKVECTOR2_1_OFFSET))(this, v);
		}

		::UnityEngine::Vector4 Pack2Vector4()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_FLARE_PACK2VECTOR4_OFFSET))(this);
		}
	};
}
