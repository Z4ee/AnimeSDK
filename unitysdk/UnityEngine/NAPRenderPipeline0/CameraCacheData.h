#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::NAPRenderPipeline0 { class IPerCameraLensFlareData; }
namespace UnityEngine::NAPRenderPipeline0 { class ViewConstants; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D810940)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA_ISANYSHADERCOMPILEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1D810990)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA_UPDATESHADERCOMPILESTAMP_OFFSET UNITYSDK_OFFSET(0x1D810980)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8109A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CameraCacheData_TypeDefinitionIndex = 5966;

	class CameraCacheData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt64>* LocalLightShadowCacheEmptyBlits; // 0x10
		::UnityEngine::NAPRenderPipeline0::ViewConstants* LastFrameViewConstants; // 0x18
		::System::Int32 TAAFrameIndex; // 0x20
		::UnityEngine::Profiling::CustomSampler* m_ProfileSample; // 0x28
		::System::UInt64 m_CurStamp; // 0x30
		::System::Boolean m_AnyShaderCompiledBefore; // 0x38
		::UnityEngine::NAPRenderPipeline0::IPerCameraLensFlareData* m_LensFlare; // 0x40
		::System::Int32 ShadowCacheCurrentRenderIndex0; // 0x48
		::System::Int32 ShadowCacheCurrentRenderIndex1; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA_CLEANUP_OFFSET))(this);
		}

		::System::Void UpdateShaderCompileStamp(::System::UInt64 newStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA_UPDATESHADERCOMPILESTAMP_OFFSET))(this, newStamp);
		}

		::System::Boolean IsAnyShaderCompiledBefore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATA_ISANYSHADERCOMPILEDBEFORE_OFFSET))(this);
		}
	};
}
