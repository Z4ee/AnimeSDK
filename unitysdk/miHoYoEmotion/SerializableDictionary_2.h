#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_KeyCollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_ValueCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SerializableDictionary_2_TypeDefinitionIndex = 40009;

	template <typename TK, typename TV>
	class SerializableDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<TK>* _keys; // 0x0
		::System::Collections::Generic::List_1<TV>* _values; // 0x0
		::System::Collections::Generic::Dictionary_2<TK, TV>* _dictionary; // 0x0
	};
}
