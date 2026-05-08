#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class PBDDeformer; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWind; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_APPLYWIND_OFFSET UNITYSDK_OFFSET(0x1B367200)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_GET_WINDDIRECTIONWS_OFFSET UNITYSDK_OFFSET(0x1B366EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3679B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B367520)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B366F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B367160)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1B3671B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_SET_WINDDIRECTIONWS_OFFSET UNITYSDK_OFFSET(0x1B366F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_UPDATELOCALWINDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B367040)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B367A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B367A10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FlagWindController_TypeDefinitionIndex = 29991;

	class FlagWindController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_enableFlagUpdateCull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FlagWindController_TypeDefinitionIndex)->GetStaticField(0x72E0);
		}
		::UnityEngine::PBDDeformer* m_Deformer; // 0x18
		::System::Single windIntensity; // 0x20
		::System::Boolean useLocalSpaceWindDirection; // 0x24
		::UnityEngine::Vector3 windDirection; // 0x28
		::System::Single forceRandom; // 0x34
		::System::Single directionRandom; // 0x38
		::System::Boolean ignoreMass; // 0x3C
		::UnityEngine::Vector3 _windDirectionWS_k__BackingField; // 0x40
		::System::Single m_TimeDelay; // 0x4C
		::System::Single timeDelay; // 0x50
		::System::Int32 _visibleFrameCount; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_windDirectionWS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_GET_WINDDIRECTIONWS_OFFSET))(this);
		}

		::System::Void set_windDirectionWS(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_SET_WINDDIRECTIONWS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void UpdateLocalWindDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_UPDATELOCALWINDDIRECTION_OFFSET))(this);
		}

		::System::Void OnWillRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONWILLRENDEROBJECT_OFFSET))(this);
		}

		::System::Void ApplyWind(::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* windConfig, ::System::Single fixedTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_APPLYWIND_OFFSET))(this, windConfig, fixedTime);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDISABLE_OFFSET))(this);
		}
	};
}
