#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18859FB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__REBUILDSELECTIONINDEXES_B__0_OFFSET UNITYSDK_OFFSET(0x1885A080)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshValidation___c__DisplayClass10_0_TypeDefinitionIndex = 34246;

	class MeshValidation___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS10_0__REBUILDSELECTIONINDEXES_B__0_OFFSET))(this, x);
		}
	};
}
