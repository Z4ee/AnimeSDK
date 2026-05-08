#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDMeshGeneartionType_TypeDefinitionIndex = 24838;

	enum class PBDMeshGeneartionType : ::System::Int32
	{
		QuadRibbon = 0,
		CylinderRibbon = 1,
		Rectangle_Obsolete = 2,
		TemplateMesh = 3,
	};
}
