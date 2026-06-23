#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering::Universal { class FlagWindController; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWind; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_ADDWINDPROXY_OFFSET UNITYSDK_OFFSET(0x1C99CEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_APPLYWIND_OFFSET UNITYSDK_OFFSET(0x1C99D390)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C99CCF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_REMOVEWINDPROXY_OFFSET UNITYSDK_OFFSET(0x1C99D1B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99CE20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FlagWindManager_TypeDefinitionIndex = 26302;

	class FlagWindManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::FlagWindManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::FlagWindManager**)Il2CppClass::FromTypeDefinitionIndex(FlagWindManager_TypeDefinitionIndex)->GetStaticField(0x21610);
		}
		::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* m_CurrentWindConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::FlagWindController*>* windProxySet; // 0x18
		::System::Single preFixedTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::FlagWindManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::FlagWindManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void AddWindProxy(::UnityEngine::Rendering::Universal::FlagWindController* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FlagWindController*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_ADDWINDPROXY_OFFSET))(this, proxy);
		}

		::System::Void RemoveWindProxy(::UnityEngine::Rendering::Universal::FlagWindController* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FlagWindController*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_REMOVEWINDPROXY_OFFSET))(this, proxy);
		}

		::System::Void ApplyWind(::System::Single fixedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDMANAGER_APPLYWIND_OFFSET))(this, fixedTime);
		}
	};
}
