#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_WINGEDEDGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1924F290)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1924F2D0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE___C__SORTCOMMONINDEXESBYADJACENCY_B__32_1_OFFSET UNITYSDK_OFFSET(0x1924F2E0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE___C__SORTCOMMONINDEXESBYADJACENCY_B__32_2_OFFSET UNITYSDK_OFFSET(0x1924F300)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int WingedEdge___c_TypeDefinitionIndex = 43263;

	class WingedEdge___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Edge, ::System::Int32>** StaticGet___9__32_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Edge, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WingedEdge___c_TypeDefinitionIndex)->GetStaticField(0x64F10);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(WingedEdge___c_TypeDefinitionIndex)->GetStaticField(0x64F18);
		}
		static ::UnityEngine::ProBuilder::WingedEdge___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::WingedEdge___c**)Il2CppClass::FromTypeDefinitionIndex(WingedEdge___c_TypeDefinitionIndex)->GetStaticField(0x64F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Edge _SortCommonIndexesByAdjacency_b__32_1(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE___C__SORTCOMMONINDEXESBYADJACENCY_B__32_1_OFFSET))(this, a1);
		}

		::System::Int32 _SortCommonIndexesByAdjacency_b__32_2(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE___C__SORTCOMMONINDEXESBYADJACENCY_B__32_2_OFFSET))(this, a1);
		}
	};
}
