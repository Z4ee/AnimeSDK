#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET UNITYSDK_OFFSET(0x1AF9F0B0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int DelegateHelpers_TypeDefinitionIndex = 29387;

	class DelegateHelpers : public ::System::Object
	{
	public:
		static ::System::Void InvokeCallbacksSafe(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& callbacks, ::System::String* callbackName, ::System::Object* context)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>&, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET))(callbacks, callbackName, context);
		}
	};
}
