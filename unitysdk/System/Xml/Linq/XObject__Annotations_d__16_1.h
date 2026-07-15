#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Xml::Linq { class XObject; }

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObject__Annotations_d__16_1_TypeDefinitionIndex = 3874;

	template <typename T>
	class XObject__Annotations_d__16_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Xml::Linq::XObject* __4__this; // 0x0
		::Il2CppArray<::System::Object*>* _a_5__1; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
