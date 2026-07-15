#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextProcessingStack_1_TypeDefinitionIndex = 41865;

	template <typename T>
	struct TMP_TextProcessingStack_1
	{
		::Il2CppArray<T>* itemStack; // 0x0
		::System::Int32 index; // 0x0
		T m_DefaultItem; // 0x0
		::System::Int32 m_Capacity; // 0x0
		::System::Int32 m_RolloverSize; // 0x0
		::System::Int32 m_Count; // 0x0
		// static const ::System::Int32 k_DefaultCapacity = 0x4; // 0x0
	};
}
