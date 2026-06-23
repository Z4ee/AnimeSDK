#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Listeners_1_Action_4; }
namespace System::Data { template <typename T1, typename T2, typename T3> class Listeners_1_Func_2; }

namespace System::Data
{
	inline static constexpr unsigned int Listeners_1_TypeDefinitionIndex = 38682;

	template <typename TElem>
	class Listeners_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<TElem>* _listeners; // 0x0
		::System::Data::Listeners_1_Func_2<TElem, TElem, ::System::Boolean>* _filter; // 0x0
		::System::Int32 _objectID; // 0x0
		::System::Int32 _listenerReaderCount; // 0x0
	};
}
