#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricCloudV2Quality.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }

#define VOLUMETRICCLOUDV2MANAGER_BUILDHISTORYDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x1D700300)
#define VOLUMETRICCLOUDV2MANAGER_CLEANUPINVALIDCAMERAS_OFFSET UNITYSDK_OFFSET(0x1D6FFFB0)
#define VOLUMETRICCLOUDV2MANAGER_CLEANUP_1_OFFSET UNITYSDK_OFFSET(0x1D7008E0)
#define VOLUMETRICCLOUDV2MANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D700B20)
#define VOLUMETRICCLOUDV2MANAGER_ENSUREHISTORYRTS_OFFSET UNITYSDK_OFFSET(0x1D6FF220)
#define VOLUMETRICCLOUDV2MANAGER_GETRECONSTRUCTIONFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1D6FEFB0)
#define VOLUMETRICCLOUDV2MANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D6FE970)
#define VOLUMETRICCLOUDV2MANAGER_ISDESCRIPTORCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1D700560)
#define VOLUMETRICCLOUDV2MANAGER_ISHISTORYRTPAIRVALID_OFFSET UNITYSDK_OFFSET(0x1D7005F0)
#define VOLUMETRICCLOUDV2MANAGER_RELEASEHISTORYRTS_OFFSET UNITYSDK_OFFSET(0x1D700DF0)
#define VOLUMETRICCLOUDV2MANAGER_UPDATEHISTORYINDEX_OFFSET UNITYSDK_OFFSET(0x1D6FED20)
#define VOLUMETRICCLOUDV2MANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D701000)
#define VOLUMETRICCLOUDV2MANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FEA10)

inline static constexpr unsigned int VolumetricCloudV2Manager_TypeDefinitionIndex = 27014;

class VolumetricCloudV2Manager : public ::System::Object
{
public:
	static ::VolumetricCloudV2Manager** StaticGet_instance()
	{
		return (::VolumetricCloudV2Manager**)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2Manager_TypeDefinitionIndex)->GetStaticField(0x237C0);
	}
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Int32>* _frameIndexByCamera; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::RenderTextureDescriptor>*>* _historyDescByCamera; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::RenderTexture*>*>* _historyDepthByCamera; // 0x20
	::UnityEngine::Camera* _activeCamera; // 0x28
	::Il2CppArray<::UnityEngine::RenderTexture*>* _historyDepthRTs; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Int32>* _historyIndexByCamera; // 0x38
	::Il2CppArray<::UnityEngine::RenderTexture*>* _historyColorRTs; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Camera*>* _invalidHistoryCameras; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::RenderTexture*>*>* _historyColorByCamera; // 0x50
	::System::Boolean historyNeedsClear; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER__CCTOR_OFFSET))();
	}

	static ::VolumetricCloudV2Manager* get_Instance()
	{
		return ((::VolumetricCloudV2Manager*(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_GET_INSTANCE_OFFSET))();
	}

	::System::Void UpdateHistoryIndex(::System::Int32& srcIndex, ::System::Int32& dstIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_UPDATEHISTORYINDEX_OFFSET))(this, srcIndex, dstIndex);
	}

	::System::Int32 GetReconstructionFrameIndex(::UnityEngine::Camera* camera, ::System::Int32 modulus)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_GETRECONSTRUCTIONFRAMEINDEX_OFFSET))(this, camera, modulus);
	}

	::System::Void EnsureHistoryRTs(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality cloudQuality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_ENSUREHISTORYRTS_OFFSET))(this, renderingData, cloudQuality);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_CLEANUP_OFFSET))(this);
	}

	::System::Void BuildHistoryDescriptors(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality cloudQuality, ::UnityEngine::RenderTextureDescriptor& colorDescriptor, ::UnityEngine::RenderTextureDescriptor& depthDescriptor)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_BUILDHISTORYDESCRIPTORS_OFFSET))(this, renderingData, cloudQuality, colorDescriptor, depthDescriptor);
	}

	static ::System::Boolean IsDescriptorCompatible(::UnityEngine::RenderTextureDescriptor& lhs, ::UnityEngine::RenderTextureDescriptor& rhs)
	{
		return ((::System::Boolean(*)(::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_ISDESCRIPTORCOMPATIBLE_OFFSET))(lhs, rhs);
	}

	static ::System::Boolean IsHistoryRTPairValid(::Il2CppArray<::UnityEngine::RenderTexture*>* historyRTs)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::RenderTexture*>*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_ISHISTORYRTPAIRVALID_OFFSET))(historyRTs);
	}

	::System::Void CleanupInvalidCameras()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_CLEANUPINVALIDCAMERAS_OFFSET))(this);
	}

	::System::Void Cleanup_1(::UnityEngine::Camera* camera)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_CLEANUP_1_OFFSET))(this, camera);
	}

	static ::System::Void ReleaseHistoryRTs(::Il2CppArray<::UnityEngine::RenderTexture*>* historyRTs)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::RenderTexture*>*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDV2MANAGER_RELEASEHISTORYRTS_OFFSET))(historyRTs);
	}
};
