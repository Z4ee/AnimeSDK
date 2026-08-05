#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/OneOrMore_2.h"

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int OneOrMore_2_Enumerator_TypeDefinitionIndex = 32696;

	template <typename TValue, typename TList>
	class OneOrMore_2_Enumerator : public ::System::Object
	{
	public:
		::System::Int32 m_Index; // 0x0
		::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> m_List; // 0x0
	};
}
