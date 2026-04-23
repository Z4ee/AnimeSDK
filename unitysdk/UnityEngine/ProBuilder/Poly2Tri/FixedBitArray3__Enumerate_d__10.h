#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A1F35F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_BOOLEAN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A1F3740)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A1F36B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A1F37C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A1F3710)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A1F36C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1F35E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F34C0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int FixedBitArray3__Enumerate_d__10_TypeDefinitionIndex = 35522;

	class FixedBitArray3__Enumerate_d__10 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __3____4__this; // 0x14
		::System::Boolean __2__current; // 0x17
		::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __4__this; // 0x18
		::System::Int32 _i_5__2; // 0x1C
		::System::Int32 __l__initialThreadId; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_IEnumerator_System_Boolean__get_Current()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Boolean>* System_Collections_Generic_IEnumerable_System_Boolean__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_BOOLEAN__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_FIXEDBITARRAY3__ENUMERATE_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
