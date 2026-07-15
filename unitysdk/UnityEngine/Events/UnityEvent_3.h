#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3> class UnityAction_3; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_3_TypeDefinitionIndex = 4484;

	template <typename T0, typename T1, typename T2>
	class UnityEvent_3 : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x0
	};
}
