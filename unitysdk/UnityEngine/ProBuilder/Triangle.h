#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_PROBUILDER_TRIANGLE_CONTAINSEDGE_OFFSET UNITYSDK_OFFSET(0x3BAEF30)
#define UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BAEE50)
#define UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B9CDD0)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BAEEB0)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_A_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_B_OFFSET UNITYSDK_OFFSET(0x1E120)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_C_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x3BAEDF0)
#define UNITYENGINE_PROBUILDER_TRIANGLE_ISADJACENT_OFFSET UNITYSDK_OFFSET(0x3BAEED0)
#define UNITYENGINE_PROBUILDER_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x7CCB0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Triangle_TypeDefinitionIndex = 43251;

	struct alignas(4) Triangle
	{
		::System::Int32 m_A; // 0x10
		::System::Int32 m_B; // 0x14
		::System::Int32 m_C; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_a()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_A_OFFSET))(this);
		}

		::System::Int32 get_b()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_B_OFFSET))(this);
		}

		::System::Int32 get_c()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_C_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_indices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_INDICES_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::Triangle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Triangle))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsAdjacent(::UnityEngine::ProBuilder::Triangle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Triangle))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_ISADJACENT_OFFSET))(this, a1);
		}

		/*
		::System::Boolean ContainsEdge(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_CONTAINSEDGE_OFFSET))(this, a1);
		}
		*/
	};
}
