#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int OneOrMore_2_TypeDefinitionIndex = 29419;

	template <typename TValue, typename TList>
	struct OneOrMore_2
	{
		::System::Boolean m_IsSingle; // 0x0
		TValue m_Single; // 0x0
		TList m_Multiple; // 0x0
	};
}
