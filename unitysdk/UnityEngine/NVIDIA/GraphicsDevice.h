#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSCommandExecutionData_Textures.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSCommandInitializationData.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSQuality.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSTextureTable.h"
#include "unitysdk/UnityEngine/NVIDIA/GraphicsDeviceFeature.h"
#include "unitysdk/UnityEngine/NVIDIA/OptimalDLSSSettingsData.h"
#include "unitysdk/UnityEngine/NVIDIA/PluginEvent.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NVIDIA { class DLSSContext; }
namespace UnityEngine::NVIDIA { class InitDeviceContext; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATEFEATURE_OFFSET UNITYSDK_OFFSET(0x1A4C89C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATEGRAPHICSDEVICE_OFFSET UNITYSDK_OFFSET(0x1A4C8640)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATESETTEXTUREUSERDATA_OFFSET UNITYSDK_OFFSET(0x1A4C8420)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_DESTROYFEATURE_OFFSET UNITYSDK_OFFSET(0x1A4C8DB0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_EXECUTEDLSS_OFFSET UNITYSDK_OFFSET(0x1A4C8E70)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4C7DA0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GETOPTIMALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A4C8FC0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1A4C86C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1A4C8720)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A4C7A00)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INSERTEVENTCALL_OFFSET UNITYSDK_OFFSET(0x1A4C7EA0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INTERNALCREATE_OFFSET UNITYSDK_OFFSET(0x1A4C8180)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_ISFEATUREAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A4C8860)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_CREATEFEATURESLOT_OFFSET UNITYSDK_OFFSET(0x1A4C8D30)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETBASEEVENTID_OFFSET UNITYSDK_OFFSET(0x1A4C8100)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1A4C87E0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETOPTIMALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A4C90C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETRENDEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4C8080)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETSETTEXTUREEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4C85C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_INITAPI_OFFSET UNITYSDK_OFFSET(0x1A4C7BE0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_ISFEATUREAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A4C8940)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_SHUTDOWNAPI_OFFSET UNITYSDK_OFFSET(0x1A4C7D20)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4C8440)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A4C7C60)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C9150)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C7660)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int GraphicsDevice_TypeDefinitionIndex = 5186;

	class GraphicsDevice : public ::System::Object
	{
	public:
		static ::UnityEngine::NVIDIA::GraphicsDevice** StaticGet_sGraphicsDeviceInstance()
		{
			return (::UnityEngine::NVIDIA::GraphicsDevice**)Il2CppClass::FromTypeDefinitionIndex(GraphicsDevice_TypeDefinitionIndex)->GetStaticField(0x2C0);
		}
		static ::System::String** StaticGet_s_DefaultAppDir()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GraphicsDevice_TypeDefinitionIndex)->GetStaticField(0x2C8);
		}
		static ::System::String** StaticGet_s_DefaultProjectID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GraphicsDevice_TypeDefinitionIndex)->GetStaticField(0x2D0);
		}
		::UnityEngine::NVIDIA::InitDeviceContext* m_InitDeviceContext; // 0x10
		::System::Collections::Generic::Stack_1<::UnityEngine::NVIDIA::DLSSContext*>* s_ContextObjectPool; // 0x18

		::System::Void _ctor(::System::String* projectId, ::System::String* engineVersion, ::System::String* appDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE__CTOR_OFFSET))(this, projectId, engineVersion, appDir);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE__CCTOR_OFFSET))();
		}

		::System::Boolean Initialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_SHUTDOWN_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_FINALIZE_OFFSET))(this);
		}

		::System::Void InsertEventCall(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NVIDIA::PluginEvent pluginEvent, ::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::PluginEvent, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INSERTEVENTCALL_OFFSET))(this, cmd, pluginEvent, ptr);
		}

		static ::UnityEngine::NVIDIA::GraphicsDevice* InternalCreate(::System::String* appIdOrProjectId, ::System::String* engineVersion, ::System::String* appDir)
		{
			return ((::UnityEngine::NVIDIA::GraphicsDevice*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INTERNALCREATE_OFFSET))(appIdOrProjectId, engineVersion, appDir);
		}

		static ::System::Int32 CreateSetTextureUserData(::System::Int32 featureId, ::System::Int32 textureSlot, ::System::Boolean clearTextureTable)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATESETTEXTUREUSERDATA_OFFSET))(featureId, textureSlot, clearTextureTable);
		}

		::System::Void SetTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NVIDIA::DLSSContext* dlssContext, ::UnityEngine::NVIDIA::DLSSCommandExecutionData_Textures textureSlot, ::UnityEngine::Texture* texture, ::System::Boolean clearTextureTable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSContext*, ::UnityEngine::NVIDIA::DLSSCommandExecutionData_Textures, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_SETTEXTURE_OFFSET))(this, cmd, dlssContext, textureSlot, texture, clearTextureTable);
		}

		static ::UnityEngine::NVIDIA::GraphicsDevice* CreateGraphicsDevice()
		{
			return ((::UnityEngine::NVIDIA::GraphicsDevice*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATEGRAPHICSDEVICE_OFFSET))();
		}

		static ::UnityEngine::NVIDIA::GraphicsDevice* get_device()
		{
			return ((::UnityEngine::NVIDIA::GraphicsDevice*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GET_DEVICE_OFFSET))();
		}

		static ::System::UInt32 get_version()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GET_VERSION_OFFSET))();
		}

		::System::Boolean IsFeatureAvailable(::UnityEngine::NVIDIA::GraphicsDeviceFeature featureID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDeviceFeature))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_ISFEATUREAVAILABLE_OFFSET))(this, featureID);
		}

		::UnityEngine::NVIDIA::DLSSContext* CreateFeature(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NVIDIA::DLSSCommandInitializationData& initSettings)
		{
			return ((::UnityEngine::NVIDIA::DLSSContext*(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSCommandInitializationData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATEFEATURE_OFFSET))(this, cmd, initSettings);
		}

		::System::Void DestroyFeature(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NVIDIA::DLSSContext* dlssContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_DESTROYFEATURE_OFFSET))(this, cmd, dlssContext);
		}

		::System::Void ExecuteDLSS(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NVIDIA::DLSSContext* dlssContext, ::UnityEngine::NVIDIA::DLSSTextureTable& textures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSContext*, ::UnityEngine::NVIDIA::DLSSTextureTable&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_EXECUTEDLSS_OFFSET))(this, cmd, dlssContext, textures);
		}

		::System::Boolean GetOptimalSettings(::System::UInt32 targetWidth, ::System::UInt32 targetHeight, ::UnityEngine::NVIDIA::DLSSQuality quality, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData& optimalSettings)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::NVIDIA::DLSSQuality, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GETOPTIMALSETTINGS_OFFSET))(this, targetWidth, targetHeight, quality, optimalSettings);
		}

		static ::System::Boolean NVUP_InitApi(::System::IntPtr initData)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_INITAPI_OFFSET))(initData);
		}

		static ::System::Void NVUP_ShutdownApi()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_SHUTDOWNAPI_OFFSET))();
		}

		static ::System::Boolean NVUP_IsFeatureAvailable(::UnityEngine::NVIDIA::GraphicsDeviceFeature featureID)
		{
			return ((::System::Boolean(*)(::UnityEngine::NVIDIA::GraphicsDeviceFeature))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_ISFEATUREAVAILABLE_OFFSET))(featureID);
		}

		static ::System::Boolean NVUP_GetOptimalSettings(::System::UInt32 inTargetWidth, ::System::UInt32 inTargetHeight, ::UnityEngine::NVIDIA::DLSSQuality inPerfVQuality, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData& data)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::NVIDIA::DLSSQuality, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETOPTIMALSETTINGS_OFFSET))(inTargetWidth, inTargetHeight, inPerfVQuality, data);
		}

		static ::System::IntPtr NVUP_GetRenderEventCallback()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETRENDEREVENTCALLBACK_OFFSET))();
		}

		static ::System::IntPtr NVUP_GetSetTextureEventCallback()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETSETTEXTUREEVENTCALLBACK_OFFSET))();
		}

		static ::System::UInt32 NVUP_CreateFeatureSlot()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_CREATEFEATURESLOT_OFFSET))();
		}

		static ::System::UInt32 NVUP_GetDeviceVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETDEVICEVERSION_OFFSET))();
		}

		static ::System::Int32 NVUP_GetBaseEventId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETBASEEVENTID_OFFSET))();
		}
	};
}
