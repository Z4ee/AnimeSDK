#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Pooled/ClearMode.h"

namespace System { class Array; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }
namespace UnityEngine::Pooled { template <typename T> class DefaultArrayPoolSource_1; }

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int PooledListForClass_1_TypeDefinitionIndex = 4517;

	template <typename T>
	class PooledListForClass_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::Pooled::DefaultArrayPoolSource_1<::System::Object*>** StaticGet_PublicPool()
		{
			return (::UnityEngine::Pooled::DefaultArrayPoolSource_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PooledListForClass_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::Buffers::ArrayPool_1<T>* _pool; // 0x0
		::System::Object* _syncRoot; // 0x0
		::Il2CppArray<::System::Object*>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
	};
}
