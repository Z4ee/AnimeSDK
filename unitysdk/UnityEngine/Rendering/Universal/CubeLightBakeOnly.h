#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/CubeLightBakeOnly_LightProxyConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal { class CubeLightBakeOnly_LightProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CUBELIGHTBAKEONLY_INITPROXYCONFIGS_OFFSET UNITYSDK_OFFSET(0xF7986F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CUBELIGHTBAKEONLY__CTOR_OFFSET UNITYSDK_OFFSET(0xF798950)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CubeLightBakeOnly_TypeDefinitionIndex = 27207;

	class CubeLightBakeOnly : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Rendering::Universal::CubeLightBakeOnly_LightProxyConfig>** StaticGet_s_LightProxyConfigs()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::Universal::CubeLightBakeOnly_LightProxyConfig>**)Il2CppClass::FromTypeDefinitionIndex(CubeLightBakeOnly_TypeDefinitionIndex)->GetStaticField(0x22370);
		}
		::Il2CppArray<::UnityEngine::Rendering::Universal::CubeLightBakeOnly_LightProxy*>* lightProxies; // 0x18
		::UnityEngine::Vector3 m_Size; // 0x20
		::UnityEngine::Color m_Color; // 0x2C
		::System::Single m_Intensity; // 0x3C
		::System::Single m_IndirectMultiplier; // 0x40
		::System::Single m_Range; // 0x44
		::System::Boolean m_LockColor; // 0x48
		::System::Boolean m_LockIntensity; // 0x49
		::System::Boolean m_LockRange; // 0x4A
		::System::Boolean m_LockIndirectMultiplier; // 0x4B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CUBELIGHTBAKEONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void InitProxyConfigs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CUBELIGHTBAKEONLY_INITPROXYCONFIGS_OFFSET))();
		}
	};
}
