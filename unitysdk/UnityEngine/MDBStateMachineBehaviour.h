#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

#define UNITYENGINE_MDBSTATEMACHINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4DFC0)

namespace UnityEngine
{
	inline static constexpr unsigned int MDBStateMachineBehaviour_TypeDefinitionIndex = 6610;

	class MDBStateMachineBehaviour : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBSTATEMACHINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
