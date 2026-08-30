#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BADBC0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BADB90)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUPHASHSET_OFFSET UNITYSDK_OFFSET(0x1EB0EF90)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUP_OFFSET UNITYSDK_OFFSET(0x1EB0EED0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BADC90)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_COMMON_OFFSET UNITYSDK_OFFSET(0x6020)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB0EA70)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB0EB80)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_COMMON_OFFSET UNITYSDK_OFFSET(0x9500)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_LOCAL_OFFSET UNITYSDK_OFFSET(0xC610)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BADCC0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BADB70)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0x2E46CE0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EdgeLookup_TypeDefinitionIndex = 43160;

	struct alignas(4) EdgeLookup
	{
		::UnityEngine::ProBuilder::Edge m_Local; // 0x10
		::UnityEngine::ProBuilder::Edge m_Common; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::Edge a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::ProBuilder::Edge get_local()
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_LOCAL_OFFSET))(this);
		}

		::System::Void set_local(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_LOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge get_common()
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_COMMON_OFFSET))(this);
		}

		::System::Void set_common(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_COMMON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::EdgeLookup a1, ::UnityEngine::ProBuilder::EdgeLookup a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::EdgeLookup a1, ::UnityEngine::ProBuilder::EdgeLookup a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_TOSTRING_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookup(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUP_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookupHashSet(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUPHASHSET_OFFSET))(a1, a2);
		}
	};
}
