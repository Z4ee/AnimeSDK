#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_SHAPE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A2D51B0)
#define UNITYENGINE_PROBUILDER_SHAPES_SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D5230)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 40022;

	class Shape : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SHAPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SHAPE_UPDATEBOUNDS_OFFSET))(this, mesh, size, rotation, bounds);
		}
	};
}
