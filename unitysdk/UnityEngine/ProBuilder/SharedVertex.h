#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_ADD_OFFSET UNITYSDK_OFFSET(0x1920D7C0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1923B4C0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1923B4E0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_COPYTO_OFFSET UNITYSDK_OFFSET(0x1923B530)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1920E0E0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTEXLOOKUP_OFFSET UNITYSDK_OFFSET(0x1923B5D0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTICESWITHPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19207420)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1923B3B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1920B300)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1923B5B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1920B320)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVEANDSHIFT_OFFSET UNITYSDK_OFFSET(0x1923C7B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVE_OFFSET UNITYSDK_OFFSET(0x1923B550)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SETCOINCIDENT_OFFSET UNITYSDK_OFFSET(0x1920D1F0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1923B460)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SHIFTINDEXES_OFFSET UNITYSDK_OFFSET(0x1923BD50)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SORTEDREMOVEANDSHIFT_OFFSET UNITYSDK_OFFSET(0x1923C850)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1923B4B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1923C640)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1923BDF0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1923B490)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1923B3C0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1922B7F0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SharedVertex_TypeDefinitionIndex = 43241;

	class SharedVertex : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_Vertices; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::ProBuilder::SharedVertex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SharedVertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_arrayInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ARRAYINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSTRING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Void GetSharedVertexLookup(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTEXLOOKUP_OFFSET))(a1, a2);
		}

		::System::Void ShiftIndexes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SHIFTINDEXES_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices_1(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* GetSharedVerticesWithPositions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTICESWITHPOSITIONS_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* RemoveAndShift(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVEANDSHIFT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* SortedRemoveAndShift(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SORTEDREMOVEANDSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Void SetCoincident(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*& a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*&, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SETCOINCIDENT_OFFSET))(a1, a2);
		}
	};
}
