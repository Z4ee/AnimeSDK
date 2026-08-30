#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__DISPLAYCLASS17_0__APPENDVERTICESTOEDGE_B__0_OFFSET UNITYSDK_OFFSET(0xCFC1200)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFBDCE0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int AppendElements___c__DisplayClass17_0_TypeDefinitionIndex = 43284;

	class AppendElements___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Int32 delCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Edge _AppendVerticesToEdge_b__0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__DISPLAYCLASS17_0__APPENDVERTICESTOEDGE_B__0_OFFSET))(this, a1);
		}
	};
}
