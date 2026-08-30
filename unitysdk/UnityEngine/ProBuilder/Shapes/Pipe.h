#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_PIPE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1EBB63E0)
#define UNITYENGINE_PROBUILDER_SHAPES_PIPE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1EBB64A0)
#define UNITYENGINE_PROBUILDER_SHAPES_PIPE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EBB6460)
#define UNITYENGINE_PROBUILDER_SHAPES_PIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB7410)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Pipe_TypeDefinitionIndex = 43271;

	class Pipe : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Int32 m_NumberOfSides; // 0x10
		::System::Int32 m_HeightCuts; // 0x14
		::System::Single m_Thickness; // 0x18
		::System::Boolean m_Smooth; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PIPE__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PIPE_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PIPE_UPDATEBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PIPE_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}
	};
}
