#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187FDF80)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__GETSHAREDVERTEXHANDLEEDGES_B__0_OFFSET UNITYSDK_OFFSET(0x187FF3E0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EdgeUtility___c__DisplayClass0_0_TypeDefinitionIndex = 34091;

	class EdgeUtility___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Edge _GetSharedVertexHandleEdges_b__0(::UnityEngine::ProBuilder::Edge x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY___C__DISPLAYCLASS0_0__GETSHAREDVERTEXHANDLEEDGES_B__0_OFFSET))(this, x);
		}
	};
}
