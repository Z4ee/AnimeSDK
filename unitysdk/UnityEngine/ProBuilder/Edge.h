#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_PROBUILDER_EDGE_ADD_OFFSET UNITYSDK_OFFSET(0x187FCF10)
#define UNITYENGINE_PROBUILDER_EDGE_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x21076D0)
#define UNITYENGINE_PROBUILDER_EDGE_CONTAINS_2_OFFSET UNITYSDK_OFFSET(0x2107700)
#define UNITYENGINE_PROBUILDER_EDGE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x21076C0)
#define UNITYENGINE_PROBUILDER_EDGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2107580)
#define UNITYENGINE_PROBUILDER_EDGE_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x2107620)
#define UNITYENGINE_PROBUILDER_EDGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2107550)
#define UNITYENGINE_PROBUILDER_EDGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x21075F0)
#define UNITYENGINE_PROBUILDER_EDGE_GETINDICES_OFFSET UNITYSDK_OFFSET(0x187FD140)
#define UNITYENGINE_PROBUILDER_EDGE_ISVALID_OFFSET UNITYSDK_OFFSET(0x2107520)
#define UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x187FCE20)
#define UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x187FCDE0)
#define UNITYENGINE_PROBUILDER_EDGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x187FCE60)
#define UNITYENGINE_PROBUILDER_EDGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x187FCE90)
#define UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x187FCE40)
#define UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x187FCE00)
#define UNITYENGINE_PROBUILDER_EDGE_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x187FCF90)
#define UNITYENGINE_PROBUILDER_EDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2107540)
#define UNITYENGINE_PROBUILDER_EDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x187FD470)
#define UNITYENGINE_PROBUILDER_EDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Edge_TypeDefinitionIndex = 34087;

	struct alignas(4) Edge
	{
		static ::UnityEngine::ProBuilder::Edge* StaticGet_Empty()
		{
			return (::UnityEngine::ProBuilder::Edge*)Il2CppClass::FromTypeDefinitionIndex(Edge_TypeDefinitionIndex)->GetStaticField(0xCD20);
		}
		::System::Int32 a; // 0x10
		::System::Int32 b; // 0x14

		::System::Void _ctor(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE__CTOR_OFFSET))(this, a, b);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE__CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::Edge other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_GETHASHCODE_OFFSET))(this);
		}

		static ::UnityEngine::ProBuilder::Edge op_Addition(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Edge op_Subtraction(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Edge op_Addition_1(::UnityEngine::ProBuilder::Edge a, ::System::Int32 b)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_1_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Edge op_Subtraction_1(::UnityEngine::ProBuilder::Edge a, ::System::Int32 b)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Edge Add(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_ADD_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Edge Subtract(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_SUBTRACT_OFFSET))(a, b);
		}

		::System::Boolean Equals_2(::UnityEngine::ProBuilder::Edge other, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_EQUALS_2_OFFSET))(this, other, lookup);
		}

		::System::Boolean Contains(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CONTAINS_OFFSET))(this, index);
		}

		::System::Boolean Contains_1(::UnityEngine::ProBuilder::Edge other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CONTAINS_1_OFFSET))(this, other);
		}

		::System::Boolean Contains_2(::System::Int32 index, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CONTAINS_2_OFFSET))(this, index, lookup);
		}

		static ::System::Void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_GETINDICES_OFFSET))(edges, indices);
		}
	};
}
