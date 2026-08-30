#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS0_0__AUTOSTITCH_B__0_OFFSET UNITYSDK_OFFSET(0x1EB7B4A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB75B80)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int UVEditing___c__DisplayClass0_0_TypeDefinitionIndex = 43329;

	class UVEditing___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Face* f2; // 0x10
		::UnityEngine::ProBuilder::Face* f1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AutoStitch_b__0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS0_0__AUTOSTITCH_B__0_OFFSET))(this, a1);
		}
	};
}
