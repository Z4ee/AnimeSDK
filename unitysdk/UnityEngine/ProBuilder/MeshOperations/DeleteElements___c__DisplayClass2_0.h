#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1883BAD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS2_0__DELETEFACES_B__0_OFFSET UNITYSDK_OFFSET(0x1883D960)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int DeleteElements___c__DisplayClass2_0_TypeDefinitionIndex = 34228;

	class DeleteElements___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _DeleteFaces_b__0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS2_0__DELETEFACES_B__0_OFFSET))(this, x);
		}
	};
}
