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

#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATEFEATURE_OFFSET UNITYSDK_OFFSET(0x1EFF8860)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATEGRAPHICSDEVICE_OFFSET UNITYSDK_OFFSET(0x1EFF85A0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATESETTEXTUREUSERDATA_OFFSET UNITYSDK_OFFSET(0x1EFF83C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_DESTROYFEATURE_OFFSET UNITYSDK_OFFSET(0x1EFF8C20)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_EXECUTEDLSS_OFFSET UNITYSDK_OFFSET(0x1EFF8CE0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EFF7E50)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GETOPTIMALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EFF8E30)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1EFF85F0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1EFF8620)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EFF7B00)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INSERTEVENTCALL_OFFSET UNITYSDK_OFFSET(0x1EFF7F20)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INTERNALCREATE_OFFSET UNITYSDK_OFFSET(0x1EFF81C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_ISFEATUREAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1EFF8740)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_CREATEFEATURESLOT_OFFSET UNITYSDK_OFFSET(0x1EFF8BA0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETBASEEVENTID_OFFSET UNITYSDK_OFFSET(0x1EFF8140)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1EFF86C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETOPTIMALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EFF8F00)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETRENDEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EFF80C0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETSETTEXTUREEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EFF8520)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_INITAPI_OFFSET UNITYSDK_OFFSET(0x1EFF7CB0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_ISFEATUREAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1EFF87E0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_SHUTDOWNAPI_OFFSET UNITYSDK_OFFSET(0x1EFF7DD0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EFF83E0)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1EFF7D30)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFF8F90)
#define UNITYENGINE_NVIDIA_GRAPHICSDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF7870)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int GraphicsDevice_TypeDefinitionIndex = 5028;

	class GraphicsDevice : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_s_DefaultAppDir()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GraphicsDevice_TypeDefinitionIndex)->GetStaticField(0x1D0);
		}
		static ::UnityEngine::NVIDIA::GraphicsDevice** StaticGet_sGraphicsDeviceInstance()
		{
			return (::UnityEngine::NVIDIA::GraphicsDevice**)Il2CppClass::FromTypeDefinitionIndex(GraphicsDevice_TypeDefinitionIndex)->GetStaticField(0x1D8);
		}
		static ::System::String** StaticGet_s_DefaultProjectID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GraphicsDevice_TypeDefinitionIndex)->GetStaticField(0x1E0);
		}
		::UnityEngine::NVIDIA::InitDeviceContext* m_InitDeviceContext; // 0x10
		::System::Collections::Generic::Stack_1<::UnityEngine::NVIDIA::DLSSContext*>* s_ContextObjectPool; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void InsertEventCall(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::NVIDIA::PluginEvent a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::PluginEvent, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INSERTEVENTCALL_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::NVIDIA::GraphicsDevice* InternalCreate(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::UnityEngine::NVIDIA::GraphicsDevice*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_INTERNALCREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CreateSetTextureUserData(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATESETTEXTUREUSERDATA_OFFSET))(a1, a2, a3);
		}

		::System::Void SetTexture(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::NVIDIA::DLSSContext* a2, ::UnityEngine::NVIDIA::DLSSCommandExecutionData_Textures a3, ::UnityEngine::Texture* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSContext*, ::UnityEngine::NVIDIA::DLSSCommandExecutionData_Textures, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_SETTEXTURE_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Boolean IsFeatureAvailable(::UnityEngine::NVIDIA::GraphicsDeviceFeature a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDeviceFeature))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_ISFEATUREAVAILABLE_OFFSET))(this, a1);
		}

		::UnityEngine::NVIDIA::DLSSContext* CreateFeature(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::NVIDIA::DLSSCommandInitializationData& a2)
		{
			return ((::UnityEngine::NVIDIA::DLSSContext*(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSCommandInitializationData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_CREATEFEATURE_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyFeature(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::NVIDIA::DLSSContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_DESTROYFEATURE_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteDLSS(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::NVIDIA::DLSSContext* a2, ::UnityEngine::NVIDIA::DLSSTextureTable& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NVIDIA::DLSSContext*, ::UnityEngine::NVIDIA::DLSSTextureTable&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_EXECUTEDLSS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetOptimalSettings(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::NVIDIA::DLSSQuality a3, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::NVIDIA::DLSSQuality, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_GETOPTIMALSETTINGS_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean NVUP_InitApi(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_INITAPI_OFFSET))(a1);
		}

		static ::System::Void NVUP_ShutdownApi()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_SHUTDOWNAPI_OFFSET))();
		}

		static ::System::Boolean NVUP_IsFeatureAvailable(::UnityEngine::NVIDIA::GraphicsDeviceFeature a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::NVIDIA::GraphicsDeviceFeature))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_ISFEATUREAVAILABLE_OFFSET))(a1);
		}

		static ::System::Boolean NVUP_GetOptimalSettings(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::NVIDIA::DLSSQuality a3, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::NVIDIA::DLSSQuality, ::UnityEngine::NVIDIA::OptimalDLSSSettingsData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_GRAPHICSDEVICE_NVUP_GETOPTIMALSETTINGS_OFFSET))(a1, a2, a3, a4);
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
