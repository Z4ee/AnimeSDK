#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_PLANE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1B13B5B0)
#define UNITYENGINE_PROBUILDER_SHAPES_PLANE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1B13B650)
#define UNITYENGINE_PROBUILDER_SHAPES_PLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13B900)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 40846;

	class Plane : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Int32 m_HeightSegments; // 0x10
		::System::Int32 m_WidthSegments; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PLANE__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PLANE_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PLANE_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}
	};
}
