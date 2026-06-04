#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B09CE90)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__GETSHAREDVERTEXHANDLEEDGES_B__0_OFFSET UNITYSDK_OFFSET(0x1B09E210)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EdgeUtility___c__DisplayClass0_0_TypeDefinitionIndex = 40737;

	class EdgeUtility___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Edge _GetSharedVertexHandleEdges_b__0(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__GETSHAREDVERTEXHANDLEEDGES_B__0_OFFSET))(this, a1);
		}
	};
}
