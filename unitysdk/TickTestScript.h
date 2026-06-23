#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_4D3FA2DF8EFA3BF8;
namespace UnityEngine { class Animator; }

#define TICKTESTSCRIPT_START_OFFSET UNITYSDK_OFFSET(0x1BF50C90)
#define TICKTESTSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF50DA0)

inline static constexpr unsigned int TickTestScript_TypeDefinitionIndex = 67867;

class TickTestScript : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single tickThreshold; // 0x18
	::UnityEngine::Animator* animator; // 0x20
	::Class_1_4D3FA2DF8EFA3BF8* tickObject; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TICKTESTSCRIPT__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TICKTESTSCRIPT_START_OFFSET))(this);
	}
};
