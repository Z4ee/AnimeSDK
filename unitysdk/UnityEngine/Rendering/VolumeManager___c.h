#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class VolumeManager; }

#define UNITYENGINE_RENDERING_VOLUMEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1959E0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B195A10)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1B195A20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeManager___c_TypeDefinitionIndex = 33813;

	class VolumeManager___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeManager___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::VolumeManager___c**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager___c_TypeDefinitionIndex)->GetStaticField(0x4BAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeManager* __cctor_b__45_0()
		{
			return ((::UnityEngine::Rendering::VolumeManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER___C___CCTOR_B__45_0_OFFSET))(this);
		}
	};
}
