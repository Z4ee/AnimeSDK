#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"

namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_1__BEVELEDGES_B__4_OFFSET UNITYSDK_OFFSET(0x1A269F00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A267D80)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel___c__DisplayClass0_1_TypeDefinitionIndex = 40035;

	class Bevel___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::EdgeLookup lup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BevelEdges_b__4(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_1__BEVELEDGES_B__4_OFFSET))(this, x);
		}
	};
}
