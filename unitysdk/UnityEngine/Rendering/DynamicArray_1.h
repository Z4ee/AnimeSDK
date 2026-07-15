#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicArray_1_TypeDefinitionIndex = 34044;

	template <typename T>
	class DynamicArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_Array; // 0x0
		::System::Int32 _size_k__BackingField; // 0x0
	};
}
