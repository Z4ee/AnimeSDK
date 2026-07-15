#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/InvokableCall_1.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Object; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int CachedInvokableCall_1_TypeDefinitionIndex = 4471;

	template <typename T>
	class CachedInvokableCall_1 : public ::UnityEngine::Events::InvokableCall_1<T>
	{
	public:
		T m_Arg1; // 0x0
	};
}
