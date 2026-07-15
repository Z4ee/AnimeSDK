#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_CONE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1778C6A0)
#define UNITYENGINE_PROBUILDER_SHAPES_CONE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1778C9C0)
#define UNITYENGINE_PROBUILDER_SHAPES_CONE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1778C720)
#define UNITYENGINE_PROBUILDER_SHAPES_CONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1778D950)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Cone_TypeDefinitionIndex = 41656;

	class Cone : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Boolean m_Smooth; // 0x10
		::System::Single m_Radius; // 0x14
		::System::Int32 m_NumberOfSides; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE_UPDATEBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CONE_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}
	};
}
