#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTFLICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0x6F51F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTINTENSITY_OFFSET UNITYSDK_OFFSET(0x96A480)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTUREOVERLAY_OFFSET UNITYSDK_OFFSET(0x3D1A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTUREOVERLAY_ST_OFFSET UNITYSDK_OFFSET(0x96A470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x2BBFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTURE_ST_OFFSET UNITYSDK_OFFSET(0x41E6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_ISDIRTTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x96A490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x96A4B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x96A4A0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_LensDirtParams_TypeDefinitionIndex = 26783;

	struct alignas(8) PostProcessPass_LensDirtParams
	{
		::UnityEngine::Texture* dirtTexture; // 0x10
		::UnityEngine::Vector4 dirtTexture_ST; // 0x18
		::UnityEngine::Vector2Int dirtTextureSize; // 0x28
		::UnityEngine::Texture* dirtTextureOverlay; // 0x30
		::UnityEngine::Vector4 dirtTextureOverlay_ST; // 0x38
		::System::Boolean dirTextureValid; // 0x48
		::System::Single dirtIntensity; // 0x4C
		::System::Single dirtFlickFrequency; // 0x50

		::System::Void _ctor(::UnityEngine::Rendering::Universal::LensDirt* lensDirt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDirt*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS__CTOR_OFFSET))(this, lensDirt);
		}

		::System::Void _ctor_1(::UnityEngine::Rendering::Universal::NapBloom* lensDirt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapBloom*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS__CTOR_1_OFFSET))(this, lensDirt);
		}

		::UnityEngine::Texture* get_DirtTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_DirtTexture_ST()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTURE_ST_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_DirtTextureSize()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTURESIZE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_DirtTextureOverlay()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTUREOVERLAY_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_DirtTextureOverlay_ST()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTTEXTUREOVERLAY_ST_OFFSET))(this);
		}

		::System::Single get_DirtIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTINTENSITY_OFFSET))(this);
		}

		::System::Boolean get_IsDirtTextureValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_ISDIRTTEXTUREVALID_OFFSET))(this);
		}

		::System::Single get_DirtFlickFrequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_LENSDIRTPARAMS_GET_DIRTFLICKFREQUENCY_OFFSET))(this);
		}
	};
}
