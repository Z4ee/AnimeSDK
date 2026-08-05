#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_LIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F5D10)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MonoLightObjectProxy_LightData_TypeDefinitionIndex = 27809;

	class MonoLightObjectProxy_LightData : public ::System::Object
	{
	public:
		::UnityEngine::Light* light; // 0x10
		::System::Single intensity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_LIGHTDATA__CTOR_OFFSET))(this);
		}
	};
}
