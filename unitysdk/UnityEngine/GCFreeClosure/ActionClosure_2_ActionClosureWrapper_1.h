#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"

namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_2_ActionClosureWrapper_1_TypeDefinitionIndex = 4439;

	template <typename TInput0, typename TInput1, typename T>
	class ActionClosure_2_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::ActionByRef_3<::UnityEngine::GCFreeClosure::Closure, TInput0, TInput1>** StaticGet__default()
		{
			return (::UnityEngine::GCFreeClosure::ActionByRef_3<::UnityEngine::GCFreeClosure::Closure, TInput0, TInput1>**)Il2CppClass::FromTypeDefinitionIndex(ActionClosure_2_ActionClosureWrapper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
