#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18844BA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS25_0__GETFACELOOP_B__0_OFFSET UNITYSDK_OFFSET(0x188459E0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ElementSelection___c__DisplayClass25_0_TypeDefinitionIndex = 34231;

	class ElementSelection___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Face* face; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFaceLoop_b__0(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS25_0__GETFACELOOP_B__0_OFFSET))(this, x);
		}
	};
}
