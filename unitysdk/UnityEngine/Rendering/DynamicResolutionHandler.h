#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DynamicResScalePolicyType.h"
#include "unitysdk/UnityEngine/Rendering/DynamicResUpscaleFilter.h"
#include "unitysdk/UnityEngine/Rendering/DynamicResolutionType.h"
#include "unitysdk/UnityEngine/Rendering/GlobalDynamicResolutionSettings.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class Action; }
namespace UnityEngine::Rendering { class PerformDynamicRes; }

#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DEFAULTDYNAMICRESMETHOD_OFFSET UNITYSDK_OFFSET(0x1A31E590)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DYNAMICRESOLUTIONENABLED_OFFSET UNITYSDK_OFFSET(0x1A31EC50)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_FORCESOFTWAREFALLBACK_OFFSET UNITYSDK_OFFSET(0x1A31EC80)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETCURRENTSCALE_OFFSET UNITYSDK_OFFSET(0x1A31ED70)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETLASTSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x1A31ED90)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x1A31EC90)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1A31E430)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A31E450)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_HARDWAREDYNAMICRESISENABLED_OFFSET UNITYSDK_OFFSET(0x1A31EC10)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_PROCESSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A31E5A0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_REQUESTSHARDWAREDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1A31EC30)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETCURRENTCAMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x1A31E700)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETDYNAMICRESSCALER_OFFSET UNITYSDK_OFFSET(0x1A31E670)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x1A31E440)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SOFTWAREDYNAMICRESISENABLED_OFFSET UNITYSDK_OFFSET(0x1A31EBE0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A31E710)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A31EDA0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31E4B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResolutionHandler_TypeDefinitionIndex = 33394;

	class DynamicResolutionHandler : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::DynamicResolutionHandler** StaticGet_s_Instance()
		{
			return (::UnityEngine::Rendering::DynamicResolutionHandler**)Il2CppClass::FromTypeDefinitionIndex(DynamicResolutionHandler_TypeDefinitionIndex)->GetStaticField(0x67940);
		}
		::UnityEngine::Rendering::PerformDynamicRes* m_DynamicResMethod; // 0x10
		::System::Boolean m_ForceSoftwareFallback; // 0x18
		::System::Boolean m_ForcingRes; // 0x19
		::System::Single m_MinScreenFraction; // 0x1C
		::System::Single m_PrevHWScaleWidth; // 0x20
		::System::Single m_CurrentFraction; // 0x24
		::System::Boolean m_Enabled; // 0x28
		::System::Boolean m_CurrentCameraRequest; // 0x29
		::UnityEngine::Rendering::DynamicResolutionType type; // 0x2A
		::UnityEngine::Rendering::DynamicResUpscaleFilter _filter_k__BackingField; // 0x2B
		::System::Single m_PrevFraction; // 0x2C
		::System::Single m_PrevHWScaleHeight; // 0x30
		::UnityEngine::Vector2Int m_LastScaledSize; // 0x34
		::System::Single m_MaxScreenFraction; // 0x3C
		::UnityEngine::Rendering::DynamicResScalePolicyType m_ScalerType; // 0x40
		::UnityEngine::Vector2Int cachedOriginalSize; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::DynamicResUpscaleFilter get_filter()
		{
			return ((::UnityEngine::Rendering::DynamicResUpscaleFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_FILTER_OFFSET))(this);
		}

		::System::Void set_filter(::UnityEngine::Rendering::DynamicResUpscaleFilter value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DynamicResUpscaleFilter))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FILTER_OFFSET))(this, value);
		}

		static ::UnityEngine::Rendering::DynamicResolutionHandler* get_instance()
		{
			return ((::UnityEngine::Rendering::DynamicResolutionHandler*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Single DefaultDynamicResMethod()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DEFAULTDYNAMICRESMETHOD_OFFSET))();
		}

		::System::Void ProcessSettings(::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GlobalDynamicResolutionSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_PROCESSSETTINGS_OFFSET))(this, settings);
		}

		static ::System::Void SetDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* scaler, ::UnityEngine::Rendering::DynamicResScalePolicyType scalerType)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::PerformDynamicRes*, ::UnityEngine::Rendering::DynamicResScalePolicyType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETDYNAMICRESSCALER_OFFSET))(scaler, scalerType);
		}

		::System::Void SetCurrentCameraRequest(::System::Boolean cameraRequest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETCURRENTCAMERAREQUEST_OFFSET))(this, cameraRequest);
		}

		::System::Void Update(::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings, ::System::Action* OnResolutionChange)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GlobalDynamicResolutionSettings, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATE_OFFSET))(this, settings, OnResolutionChange);
		}

		::System::Boolean SoftwareDynamicResIsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SOFTWAREDYNAMICRESISENABLED_OFFSET))(this);
		}

		::System::Boolean HardwareDynamicResIsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_HARDWAREDYNAMICRESISENABLED_OFFSET))(this);
		}

		::System::Boolean RequestsHardwareDynamicResolution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_REQUESTSHARDWAREDYNAMICRESOLUTION_OFFSET))(this);
		}

		::System::Boolean DynamicResolutionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DYNAMICRESOLUTIONENABLED_OFFSET))(this);
		}

		::System::Void ForceSoftwareFallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_FORCESOFTWAREFALLBACK_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int size)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETSCALEDSIZE_OFFSET))(this, size);
		}

		::System::Single GetCurrentScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETCURRENTSCALE_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetLastScaledSize()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETLASTSCALEDSIZE_OFFSET))(this);
		}
	};
}
