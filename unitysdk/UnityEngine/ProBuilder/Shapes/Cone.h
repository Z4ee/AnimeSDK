#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_CONE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1889B460)
#define UNITYENGINE_PROBUILDER_SHAPES_CONE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1889B780)
#define UNITYENGINE_PROBUILDER_SHAPES_CONE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1889B4E0)
#define UNITYENGINE_PROBUILDER_SHAPES_CONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1889C4C0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Cone_TypeDefinitionIndex = 34195;

	class Cone : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Single m_Radius; // 0x10
		::System::Int32 m_NumberOfSides; // 0x14
		::System::Boolean m_Smooth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE_UPDATEBOUNDS_OFFSET))(this, mesh, size, rotation, bounds);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}
	};
}
