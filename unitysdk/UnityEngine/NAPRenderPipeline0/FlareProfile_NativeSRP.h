#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP_Flare; }

#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_CHECK_OFFSET UNITYSDK_OFFSET(0x1D7AF940)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D7AFC80)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_GET_PACKEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1D7AFDA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_GET_PARAMDIRTY_OFFSET UNITYSDK_OFFSET(0x1D7AF930)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7AFF60)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7AFF50)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFF70)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FlareProfile_NativeSRP_TypeDefinitionIndex = 5692;

	class FlareProfile_NativeSRP : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP_Flare*>* FlarePresets; // 0x18
		::UnityEngine::Texture2D* FlareAtlas; // 0x20
		::UnityEngine::Vector2Int AtlasSize; // 0x28
		::System::Int32 SingleFlareMaxSize; // 0x30
		::UnityEngine::Texture2D* defaultFlareTex; // 0x38
		::System::Boolean dirty; // 0x40
		::System::Boolean _paramDirty; // 0x41
		::Il2CppArray<::UnityEngine::Vector4>* _packedParams; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_paramDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_GET_PARAMDIRTY_OFFSET))(this);
		}

		::System::Void Check(::System::Int32 idx, ::System::Int32 changeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_CHECK_OFFSET))(this, idx, changeType);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_PackedParams()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_GET_PACKEDPARAMS_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLAREPROFILE_NATIVESRP_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
