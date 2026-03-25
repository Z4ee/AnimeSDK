#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/VLB/VolumetricDustParticles_Direction.h"
#include "unitysdk/VLB/VolumetricDustParticles_ParticleType.h"

class Class_3_1A5B091AD56E7FD6;
namespace UnityEngine { class ParticleSystem; }

#define VLB_VOLUMETRICDUSTPARTICLES_GET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xAC378F0)
#define VLB_VOLUMETRICDUSTPARTICLES_INSTANTIATEPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0xAC37910)
#define VLB_VOLUMETRICDUSTPARTICLES_SET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xAC37900)
#define VLB_VOLUMETRICDUSTPARTICLES__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC379A0)
#define VLB_VOLUMETRICDUSTPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0xAC37960)

namespace VLB
{
	inline static constexpr unsigned int VolumetricDustParticles_TypeDefinitionIndex = 39715;

	class VolumetricDustParticles : public ::RPG::Client::TAMonoPlugin_1<::Class_3_1A5B091AD56E7FD6*>
	{
	public:
		static ::System::Boolean* StaticGet_isFeatureSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VolumetricDustParticles_TypeDefinitionIndex)->GetStaticField(0x3880);
		}
		::VLB::VolumetricDustParticles_ParticleType particleType; // 0x30
		::UnityEngine::ParticleSystem* particlePrefab; // 0x38
		::System::Single alpha; // 0x40
		::System::Single size; // 0x44
		::VLB::VolumetricDustParticles_Direction direction; // 0x48
		::System::Single speed; // 0x4C
		::System::Single density; // 0x50
		::System::Single spawnMaxDistance; // 0x54
		::System::Boolean cullingEnabled; // 0x58
		::System::Single cullingMaxDistance; // 0x5C
		::System::Boolean _isCulled_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES__CCTOR_OFFSET))();
		}

		::System::Boolean get_isCulled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_GET_ISCULLED_OFFSET))(this);
		}

		::System::Void set_isCulled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_SET_ISCULLED_OFFSET))(this, value);
		}

		::System::Void InstantiateParticleSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_INSTANTIATEPARTICLESYSTEM_OFFSET))(this);
		}
	};
}
