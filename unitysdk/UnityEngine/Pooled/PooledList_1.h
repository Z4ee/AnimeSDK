#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Pooled/ClearMode.h"
#include "unitysdk/UnityEngine/Pooled/PooledList_1_Enumerator.h"

namespace System { class Array; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }
namespace UnityEngine::Pooled { template <typename T> class IPooledList_1; }

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int PooledList_1_TypeDefinitionIndex = 4515;

	template <typename T>
	class PooledList_1 : public ::System::Object
	{
	public:
		::UnityEngine::Pooled::IPooledList_1<T>* _processor; // 0x0
		static ::System::Boolean* StaticGet_IsClass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PooledList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
