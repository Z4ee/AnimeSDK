#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int FixedArray3_1__Enumerate_d__10_TypeDefinitionIndex = 36602;

	template <typename T>
	class FixedArray3_1__Enumerate_d__10 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __4__this; // 0x0
		::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __3____4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
