#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3, typename T4> class UnityAction_4; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_4_TypeDefinitionIndex = 4486;

	template <typename T0, typename T1, typename T2, typename T3>
	class UnityEvent_4 : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x0
	};
}
