#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ArrayPool_1_TypeDefinitionIndex = 85649;

	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		::System::Int32 bufferLength; // 0x0
		::System::Object* gate; // 0x0
		::System::Int32 index; // 0x0
		::Il2CppArray<::Il2CppArray<T>*>* buffers; // 0x0
	};
}
