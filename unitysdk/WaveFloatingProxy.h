#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_FBED7A3EC3E98878;
namespace UnityEngine { class SphereCollider; }

#define WAVEFLOATINGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1053CA50)

inline static constexpr unsigned int WaveFloatingProxy_TypeDefinitionIndex = 45698;

class WaveFloatingProxy : public ::RPG::Client::TAMonoPlugin_1<::Class_3_FBED7A3EC3E98878*>
{
public:
	::System::Single colliderRaiuds; // 0x30
	::System::Single radius; // 0x34
	::System::Single mass; // 0x38
	::UnityEngine::SphereCollider* Field_7_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVEFLOATINGPROXY__CTOR_OFFSET))(this);
	}
};
