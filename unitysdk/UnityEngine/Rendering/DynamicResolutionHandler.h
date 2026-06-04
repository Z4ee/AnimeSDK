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

#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DEFAULTDYNAMICRESMETHOD_OFFSET UNITYSDK_OFFSET(0x1B179690)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DYNAMICRESOLUTIONENABLED_OFFSET UNITYSDK_OFFSET(0x1B179AC0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_FORCESOFTWAREFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B179AF0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETCURRENTSCALE_OFFSET UNITYSDK_OFFSET(0x1B179BE0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETLASTSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B179C00)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B179B00)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1B179540)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B179560)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_HARDWAREDYNAMICRESISENABLED_OFFSET UNITYSDK_OFFSET(0x1B179A80)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_PROCESSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B1796A0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_REQUESTSHARDWAREDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B179AA0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETCURRENTCAMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x1B179800)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETDYNAMICRESSCALER_OFFSET UNITYSDK_OFFSET(0x1B179770)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x1B179550)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SOFTWAREDYNAMICRESISENABLED_OFFSET UNITYSDK_OFFSET(0x1B179A50)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B179810)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B179C10)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1795C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResolutionHandler_TypeDefinitionIndex = 33676;

	class DynamicResolutionHandler : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::DynamicResolutionHandler** StaticGet_s_Instance()
		{
			return (::UnityEngine::Rendering::DynamicResolutionHandler**)Il2CppClass::FromTypeDefinitionIndex(DynamicResolutionHandler_TypeDefinitionIndex)->GetStaticField(0x4A1F0);
		}
		::UnityEngine::Rendering::PerformDynamicRes* m_DynamicResMethod; // 0x10
		::UnityEngine::Vector2Int m_LastScaledSize; // 0x18
		::System::Boolean m_Enabled; // 0x20
		::UnityEngine::Rendering::DynamicResolutionType type; // 0x21
		::System::Boolean m_ForceSoftwareFallback; // 0x22
		::System::Boolean m_ForcingRes; // 0x23
		::UnityEngine::Rendering::DynamicResUpscaleFilter _filter_k__BackingField; // 0x24
		::System::Boolean m_CurrentCameraRequest; // 0x25
		::System::Single m_PrevHWScaleHeight; // 0x28
		::System::Single m_MinScreenFraction; // 0x2C
		::System::Single m_PrevHWScaleWidth; // 0x30
		::System::Single m_CurrentFraction; // 0x34
		::System::Single m_MaxScreenFraction; // 0x38
		::System::Single m_PrevFraction; // 0x3C
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

		::System::Void set_filter(::UnityEngine::Rendering::DynamicResUpscaleFilter a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DynamicResUpscaleFilter))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FILTER_OFFSET))(this, a1);
		}

		static ::UnityEngine::Rendering::DynamicResolutionHandler* get_instance()
		{
			return ((::UnityEngine::Rendering::DynamicResolutionHandler*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Single DefaultDynamicResMethod()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DEFAULTDYNAMICRESMETHOD_OFFSET))();
		}

		::System::Void ProcessSettings(::UnityEngine::Rendering::GlobalDynamicResolutionSettings a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GlobalDynamicResolutionSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_PROCESSSETTINGS_OFFSET))(this, a1);
		}

		static ::System::Void SetDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* a1, ::UnityEngine::Rendering::DynamicResScalePolicyType a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::PerformDynamicRes*, ::UnityEngine::Rendering::DynamicResScalePolicyType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETDYNAMICRESSCALER_OFFSET))(a1, a2);
		}

		::System::Void SetCurrentCameraRequest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETCURRENTCAMERAREQUEST_OFFSET))(this, a1);
		}

		::System::Void Update(::UnityEngine::Rendering::GlobalDynamicResolutionSettings a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GlobalDynamicResolutionSettings, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATE_OFFSET))(this, a1, a2);
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

		::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETSCALEDSIZE_OFFSET))(this, a1);
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
