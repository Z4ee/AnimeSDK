#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_87FC93F5449FCFF8;
namespace UnityEngine { class SphereCollider; }

#define WAVEFLOATINGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B20C0)

inline static constexpr unsigned int WaveFloatingProxy_TypeDefinitionIndex = 44235;

class WaveFloatingProxy : public ::RPG::Client::TAMonoPlugin_1<::Class_3_87FC93F5449FCFF8*>
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
