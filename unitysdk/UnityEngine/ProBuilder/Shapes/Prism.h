#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_PRISM_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1B13B910)
#define UNITYENGINE_PROBUILDER_SHAPES_PRISM_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1B13B920)
#define UNITYENGINE_PROBUILDER_SHAPES_PRISM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13C6A0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Prism_TypeDefinitionIndex = 40847;

	class Prism : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PRISM__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PRISM_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PRISM_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}
	};
}
