#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_SHAPE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1922D5A0)
#define UNITYENGINE_PROBUILDER_SHAPES_SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1922D620)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 43275;

	class Shape : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SHAPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SHAPE_UPDATEBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
