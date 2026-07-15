#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Buffers/ArrayPool_1.h"

namespace System { class Object; }
namespace UnityEngine::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace UnityEngine::Pooled { template <typename T> class DefaultArrayPoolSource_1_Bucket; }

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int DefaultArrayPoolSource_1_TypeDefinitionIndex = 4511;

	template <typename T>
	class DefaultArrayPoolSource_1 : public ::UnityEngine::Buffers::ArrayPool_1<T>
	{
	public:
		static ::UnityEngine::Pooled::DefaultArrayPoolSource_1<T>** StaticGet__shared()
		{
			return (::UnityEngine::Pooled::DefaultArrayPoolSource_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DefaultArrayPoolSource_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::UnityEngine::Pooled::DefaultArrayPoolSource_1_Bucket<T>*>* _buckets; // 0x0
		::System::Object* _bucketsInitializeLock; // 0x0
		::System::Int32 _maxLength; // 0x0
	};
}
