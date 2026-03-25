#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationDebugContext.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFrontNode; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepConstraint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x187B8D60)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_ACTIVECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x187B1E20)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_ACTIVENODE_OFFSET UNITYSDK_OFFSET(0x187B3040)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_ACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0x187B8D10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_PRIMARYTRIANGLE_OFFSET UNITYSDK_OFFSET(0x187B4320)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_SECONDARYTRIANGLE_OFFSET UNITYSDK_OFFSET(0x187B6630)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweepDebugContext_TypeDefinitionIndex = 29786;

	class DTSweepDebugContext : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _activePoint; // 0x18
		::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* _activeConstraint; // 0x20
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* _activeNode; // 0x28
		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* _secondaryTriangle; // 0x30
		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* _primaryTriangle; // 0x38

		::System::Void set_PrimaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_PRIMARYTRIANGLE_OFFSET))(this, value);
		}

		::System::Void set_SecondaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_SECONDARYTRIANGLE_OFFSET))(this, value);
		}

		::System::Void set_ActivePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_ACTIVEPOINT_OFFSET))(this, value);
		}

		::System::Void set_ActiveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_ACTIVENODE_OFFSET))(this, value);
		}

		::System::Void set_ActiveConstraint(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_SET_ACTIVECONSTRAINT_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPDEBUGCONTEXT_CLEAR_OFFSET))(this);
		}
	};
}
