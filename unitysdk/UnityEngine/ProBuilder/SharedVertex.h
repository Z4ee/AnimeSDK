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

#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_ADD_OFFSET UNITYSDK_OFFSET(0x1A2B53E0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A2E38A0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A2E38C0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A2E38E0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A2B5CF0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTEXLOOKUP_OFFSET UNITYSDK_OFFSET(0x1A2E3960)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTICESWITHPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A2AF7B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2E36E0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A2B31A0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A2E3940)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A2B31C0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVEANDSHIFT_OFFSET UNITYSDK_OFFSET(0x1A2E45B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A2E3900)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SETCOINCIDENT_OFFSET UNITYSDK_OFFSET(0x1A2B4FE0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A2E3790)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SHIFTINDEXES_OFFSET UNITYSDK_OFFSET(0x1A2E3E40)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SORTEDREMOVEANDSHIFT_OFFSET UNITYSDK_OFFSET(0x1A2E4630)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A2E37F0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1A2E4450)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2E3EE0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2E37D0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2E36F0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D3060)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SharedVertex_TypeDefinitionIndex = 39988;

	class SharedVertex : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_Vertices; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_OFFSET))(this, indexes);
		}

		::System::Void _ctor_1(::UnityEngine::ProBuilder::SharedVertex* sharedVertex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SharedVertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX__CTOR_1_OFFSET))(this, sharedVertex);
		}

		::Il2CppArray<::System::Int32>* get_arrayInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ARRAYINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SET_ITEM_OFFSET))(this, i, value);
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

		::System::Void Add(::System::Int32 item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_ADD_OFFSET))(this, item);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Int32 item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CONTAINS_OFFSET))(this, item);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Int32>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean Remove(::System::Int32 item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVE_OFFSET))(this, item);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Void GetSharedVertexLookup(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTEXLOOKUP_OFFSET))(sharedVertices, lookup);
		}

		::System::Void ShiftIndexes(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SHIFTINDEXES_OFFSET))(this, offset);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* lookup)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_OFFSET))(lookup);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices_1(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* list)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_1_OFFSET))(list);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* GetSharedVerticesWithPositions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTICESWITHPOSITIONS_OFFSET))(positions);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* RemoveAndShift(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* remove)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVEANDSHIFT_OFFSET))(lookup, remove);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* SortedRemoveAndShift(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup, ::System::Collections::Generic::List_1<::System::Int32>* remove)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SORTEDREMOVEANDSHIFT_OFFSET))(lookup, remove);
		}

		static ::System::Void SetCoincident(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*& lookup, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*&, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SETCOINCIDENT_OFFSET))(lookup, vertices);
		}
	};
}
