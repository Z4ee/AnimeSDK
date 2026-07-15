#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SpinLock.h"

namespace UnityEngine::Buffers
{
	inline static constexpr unsigned int DefaultArrayPool_1_Bucket_TypeDefinitionIndex = 4933;

	template <typename T>
	class DefaultArrayPool_1_Bucket : public ::System::Object
	{
	public:
		::System::Int32 _bufferLength; // 0x0
		::Il2CppArray<::Il2CppArray<T>*>* _buffers; // 0x0
		::System::Int32 _poolId; // 0x0
		::System::Threading::SpinLock _lock; // 0x0
		::System::Int32 _index; // 0x0
	};
}
