#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TESTCASEGAMEOBJECTLIFECOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E353680)
#define TESTCASEGAMEOBJECTLIFECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E3535F0)
#define TESTCASEGAMEOBJECTLIFECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E353710)

inline static constexpr unsigned int TestCaseGameObjectLifeComponent_TypeDefinitionIndex = 69838;

class TestCaseGameObjectLifeComponent : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTCASEGAMEOBJECTLIFECOMPONENT__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTCASEGAMEOBJECTLIFECOMPONENT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTCASEGAMEOBJECTLIFECOMPONENT_ONDISABLE_OFFSET))(this);
	}
};
