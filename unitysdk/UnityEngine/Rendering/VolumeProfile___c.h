#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMEPROFILE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3E900)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3E930)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE___C__ONENABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1DE3E940)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProfile___c_TypeDefinitionIndex = 34992;

	class VolumeProfile___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeProfile___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::VolumeProfile___c**)Il2CppClass::FromTypeDefinitionIndex(VolumeProfile___c_TypeDefinitionIndex)->GetStaticField(0x46F00);
		}
		static ::System::Predicate_1<::UnityEngine::Rendering::VolumeComponent*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::VolumeComponent*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeProfile___c_TypeDefinitionIndex)->GetStaticField(0x46F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__2_0(::UnityEngine::Rendering::VolumeComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE___C__ONENABLE_B__2_0_OFFSET))(this, a1);
		}
	};
}
