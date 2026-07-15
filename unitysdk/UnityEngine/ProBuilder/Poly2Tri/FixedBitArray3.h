#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_CLEAR_OFFSET UNITYSDK_OFFSET(0x3AFDBB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_ENUMERATE_OFFSET UNITYSDK_OFFSET(0x3AFDBC0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3AFDC20)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3AFDAB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3AFDB30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3AFDC20)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int FixedBitArray3_TypeDefinitionIndex = 36603;

	struct alignas(1) FixedBitArray3
	{
		::System::Boolean _0; // 0x10
		::System::Boolean _1; // 0x11
		::System::Boolean _2; // 0x12

		::System::Boolean get_Item(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Boolean>* Enumerate()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_ENUMERATE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Boolean>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
