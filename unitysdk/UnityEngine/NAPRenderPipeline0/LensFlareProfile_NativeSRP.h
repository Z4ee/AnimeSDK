#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareDataSRP_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareProfile_NativeSRP_Flare; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_CHECK_OFFSET UNITYSDK_OFFSET(0x1FC1C380)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FC1C6C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_GET_PACKEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1FC1C7E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_GET_PARAMDIRTY_OFFSET UNITYSDK_OFFSET(0x1FC1C360)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC1CD10)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC1CD00)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FC1CD20)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_SET_PARAMDIRTY_OFFSET UNITYSDK_OFFSET(0x1FC1C370)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1CD30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareProfile_NativeSRP_TypeDefinitionIndex = 18896;

	class LensFlareProfile_NativeSRP : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP*>* lensFlareDataSrps; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::LensFlareProfile_NativeSRP_Flare*>* FlarePresets; // 0x20
		::UnityEngine::Texture2D* FlareAtlas; // 0x28
		::UnityEngine::Vector2Int AtlasSize; // 0x30
		::System::Int32 SingleFlareMaxSize; // 0x38
		::UnityEngine::Texture2D* defaultFlareTex; // 0x40
		::System::Boolean dirty; // 0x48
		::System::Boolean _paramDirty; // 0x49
		::Il2CppArray<::UnityEngine::Vector4>* _packedParams; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_paramDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_GET_PARAMDIRTY_OFFSET))(this);
		}

		::System::Void set_paramDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_SET_PARAMDIRTY_OFFSET))(this, value);
		}

		::System::Void Check(::System::Int32 idx, ::System::Int32 changeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_CHECK_OFFSET))(this, idx, changeType);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_PackedParams()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_GET_PACKEDPARAMS_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREPROFILE_NATIVESRP_ONENABLE_OFFSET))(this);
		}
	};
}
