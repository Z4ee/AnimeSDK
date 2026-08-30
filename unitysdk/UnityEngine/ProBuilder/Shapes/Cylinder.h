#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1EBB34B0)
#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1EBB3850)
#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EBB3580)
#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB4720)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Cylinder_TypeDefinitionIndex = 43269;

	class Cylinder : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Int32 m_HeightCuts; // 0x10
		::System::Boolean m_Smooth; // 0x14
		::System::Int32 m_AxisDivisions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_UPDATEBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}
	};
}
