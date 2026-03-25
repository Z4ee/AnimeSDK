#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x21077B0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_OFFSET UNITYSDK_OFFSET(0x2107780)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUPHASHSET_OFFSET UNITYSDK_OFFSET(0x187FDB20)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUP_OFFSET UNITYSDK_OFFSET(0x187FDA80)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2107880)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_COMMON_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x5580)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x187FD650)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x187FD6F0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_COMMON_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_LOCAL_OFFSET UNITYSDK_OFFSET(0xBDD0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x21078B0)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2107760)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0x159A0D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EdgeLookup_TypeDefinitionIndex = 34088;

	struct alignas(4) EdgeLookup
	{
		::UnityEngine::ProBuilder::Edge m_Local; // 0x10
		::UnityEngine::ProBuilder::Edge m_Common; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::Edge common, ::UnityEngine::ProBuilder::Edge local)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_OFFSET))(this, common, local);
		}

		::System::Void _ctor_1(::System::Int32 cx, ::System::Int32 cy, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP__CTOR_1_OFFSET))(this, cx, cy, x, y);
		}

		::UnityEngine::ProBuilder::Edge get_local()
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_LOCAL_OFFSET))(this);
		}

		::System::Void set_local(::UnityEngine::ProBuilder::Edge value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_LOCAL_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::Edge get_common()
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GET_COMMON_OFFSET))(this);
		}

		::System::Void set_common(::UnityEngine::ProBuilder::Edge value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_SET_COMMON_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::EdgeLookup other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_TOSTRING_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookup(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUP_OFFSET))(edges, lookup);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookupHashSet(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP_GETEDGELOOKUPHASHSET_OFFSET))(edges, lookup);
		}
	};
}
