#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"

namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_1_ActionClosureWrapper_TypeDefinitionIndex = 4435;

	template <typename TInput0>
	class ActionClosure_1_ActionClosureWrapper : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::ActionByRef_2<::UnityEngine::GCFreeClosure::Closure, TInput0>** StaticGet__default()
		{
			return (::UnityEngine::GCFreeClosure::ActionByRef_2<::UnityEngine::GCFreeClosure::Closure, TInput0>**)Il2CppClass::FromTypeDefinitionIndex(ActionClosure_1_ActionClosureWrapper_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
