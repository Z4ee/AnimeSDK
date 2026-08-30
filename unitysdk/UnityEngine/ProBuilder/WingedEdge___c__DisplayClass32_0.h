#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_WINGEDEDGE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1924F1E0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE___C__DISPLAYCLASS32_0__SORTCOMMONINDEXESBYADJACENCY_B__0_OFFSET UNITYSDK_OFFSET(0x1924F310)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int WingedEdge___c__DisplayClass32_0_TypeDefinitionIndex = 43264;

	class WingedEdge___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* common; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortCommonIndexesByAdjacency_b__0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE___C__DISPLAYCLASS32_0__SORTCOMMONINDEXESBYADJACENCY_B__0_OFFSET))(this, a1);
		}
	};
}
