#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F4F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__REBUILDSELECTIONINDEXES_B__0_OFFSET UNITYSDK_OFFSET(0x1EB6F660)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshValidation___c__DisplayClass10_0_TypeDefinitionIndex = 43318;

	class MeshValidation___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__REBUILDSELECTIONINDEXES_B__0_OFFSET))(this, a1);
		}
	};
}
