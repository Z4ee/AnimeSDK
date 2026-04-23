#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_SPRITE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1A2DDF40)
#define UNITYENGINE_PROBUILDER_SHAPES_SPRITE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1A2DDF50)
#define UNITYENGINE_PROBUILDER_SHAPES_SPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DE2B0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Sprite_TypeDefinitionIndex = 40025;

	class Sprite : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPRITE__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPRITE_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPRITE_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}
	};
}
