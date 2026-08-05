#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

#define UNITYENGINE_BEHAVIOUR_GETENABLEDTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E474140)
#define UNITYENGINE_BEHAVIOUR_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1E474110)
#define UNITYENGINE_BEHAVIOUR_GET_ISACTIVEANDENABLED_OFFSET UNITYSDK_OFFSET(0x1E474130)
#define UNITYENGINE_BEHAVIOUR_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1E474120)
#define UNITYENGINE_BEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E474150)

namespace UnityEngine
{
	inline static constexpr unsigned int Behaviour_TypeDefinitionIndex = 5333;

	class Behaviour : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_isActiveAndEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_GET_ISACTIVEANDENABLED_OFFSET))(this);
		}

		static ::System::Boolean GetEnabledThreadSafe(::System::Int32 behaviourInstanceId)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BEHAVIOUR_GETENABLEDTHREADSAFE_OFFSET))(behaviourInstanceId);
		}
	};
}
