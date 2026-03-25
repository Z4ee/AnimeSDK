#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class WingedEdge; }
namespace UnityEngine::ProBuilder::MeshOperations { class Bevel___c__DisplayClass0_0; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_2__BEVELEDGES_B__5_OFFSET UNITYSDK_OFFSET(0x1882FD60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1882E750)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel___c__DisplayClass0_2_TypeDefinitionIndex = 34217;

	class Bevel___c__DisplayClass0_2 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* CS___8__locals1; // 0x10
		::System::Int32 c; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _BevelEdges_b__5(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_2__BEVELEDGES_B__5_OFFSET))(this, x);
		}
	};
}
