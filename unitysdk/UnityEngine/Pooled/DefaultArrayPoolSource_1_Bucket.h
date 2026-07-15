#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Pooled/SpinLockWithNoCriticalRegion.h"

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int DefaultArrayPoolSource_1_Bucket_TypeDefinitionIndex = 4512;

	template <typename T>
	class DefaultArrayPoolSource_1_Bucket : public ::System::Object
	{
	public:
		::UnityEngine::Pooled::SpinLockWithNoCriticalRegion _spinlock; // 0x0
		::Il2CppArray<::Il2CppArray<T>*>* _arr; // 0x0
		::System::Int32 _arrLength; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _minimumCount; // 0x0
		::System::Boolean _isExtending; // 0x0
		::System::Int32 ArrayNumInBucket; // 0x0
		::System::Int32 ArrayNumUsed; // 0x0
	};
}
